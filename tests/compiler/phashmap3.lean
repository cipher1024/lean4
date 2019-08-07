import init.data.persistenthashmap
import init.lean.format
open Lean PersistentHashMap

abbrev Map := PersistentHashMap Nat Nat

partial def formatMap : Node Nat Nat → Format
| (Node.collision keys vals _) := Format.sbracket $
  keys.size.fold
    (fun i fmt =>
      let k := keys.get i;
      let v := vals.get i;
      let p := if i > 0 then fmt ++ format "," ++ Format.line else fmt;
      p ++ "c@" ++ Format.paren (format k ++ " => " ++ format v))
    Format.nil
| (Node.entries entries)      := Format.sbracket $
  entries.size.fold
    (fun i fmt =>
      let entry := entries.get i;
      let p := if i > 0 then fmt ++ format "," ++ Format.line else fmt;
      p ++
      match entry with
      | Entry.null      => "<null>"
      | Entry.ref node  => formatMap node
      | Entry.entry k v => Format.paren (format k ++ " => " ++ format v))
    Format.nil

def main : IO Unit :=
do
let m : Map := PersistentHashMap.empty;
let m := m.insert 1 1;
let m := m.insert (32^5 + 1) 2;
let max := PersistentHashMap.maxDepth.toNat;
let m := m.insert (32^max + 1) 3;
let m := m.insert (32^(max+1) + 1) 4;
let m := m.insert (32^(max+2) + 1) 5;
unless (m.stats.maxDepth == PersistentHashMap.maxDepth.toNat) (IO.println "unexpected max depth");
unless (m.stats.numCollisions == 3) (IO.println "unexpected number of collisions");
IO.println m.stats;
let m := m.erase (32^(max+1) + 1);
let m := m.erase (32^(max+2) + 1);
let m := m.erase (32^max + 1);
unless (m.stats.maxDepth == PersistentHashMap.maxDepth.toNat - 1) (IO.println "unexpected max depth");
let m := m.erase (32^5 + 1);
unless (m.stats.maxDepth == 1) (IO.println "unexpected max depth");
unless (m.stats.numCollisions == 0) (IO.println "unexpected number of collisions");
IO.println m.stats