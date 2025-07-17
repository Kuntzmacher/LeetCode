#ifndef MyHashSet_H
#define MyHashSet_H

#include <list>

class MyHashSet {
private:
  static const int SIZE = 1000;
  std::list<int> table[SIZE];

  int hash(int key);

public:
  void add(int key);
  void remove(int key);
  bool contains(int key);
};

#endif
