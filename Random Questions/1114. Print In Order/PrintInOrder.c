#include <stdlib.h>

typedef struct {
  // User defined data may be declared here.
  int order;

} Foo;

// Function Declaration, do not remove
void printFirst();
void printSecond();
void printThird();

Foo *fooCreate() {
  Foo *obj = (Foo *)malloc(sizeof(Foo));

  // Initialize user defined data here.
  obj->order = 0;

  return obj;
}

void first(Foo *obj) {

  if (obj->order != 0) {
    return;
  }

  // printFirst() outputs "first". Do not change or remove this line.
  printFirst();
  obj->order++;
}

void second(Foo *obj) {

  while (obj->order < 1) {
    for (int i = 0; i < 1000; i++) {
    }
  }

  if (obj->order > 1) {
    return;
  }

  // printSecond() outputs "second". Do not change or remove this line.
  printSecond();
  obj->order++;
}

void third(Foo *obj) {

  while (obj->order < 2) {
    for (int i = 0; i < 1000; i++) {
    }
  }

  if (obj->order > 2) {
    return;
  }

  // printThird() outputs "third". Do not change or remove this line.
  printThird();
  obj->order++;
}

void fooFree(Foo *obj) {
  // User defined data may be cleaned up here.
  free(obj);
}
