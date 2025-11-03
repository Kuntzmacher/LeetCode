#include "deleteMiddle.h"

ListNode *Solution::deleteMiddle(ListNode *head) {

  int counter = 0;

  if (head->next == nullptr) {
    return nullptr;
  }

  ListNode *x = head;

  while (x->next != nullptr) {
    counter++;
    x = x->next;
  }

  counter = (counter + 1) / 2;
  x = head;

  for (int i = 0; i < counter - 1; i++) {
    x = x->next;
  }

  x->next = x->next->next;

  return head;
}
