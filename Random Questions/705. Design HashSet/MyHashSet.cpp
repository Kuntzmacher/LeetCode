#include "MyHashSet.h"

int MyHashSet::hash(int key) { return key % SIZE; }

void MyHashSet::add(int key) {
  int h = hash(key);
  if (this->contains(key)) {
    return;
  }
  table[h].push_back(key);
}

bool MyHashSet::contains(int key) {
  int h = hash(key);
  for (int val : table[h]) {
    if (key == val) {
      return true;
    }
  }
  return false;
}

void MyHashSet::remove(int key) {
  int h = hash(key);
  if (!this->contains(key)) {
    return;
  }
  table[h].remove(key);
}
