#include "deleteMiddle.h"

#include <gtest/gtest.h>

TEST(tests, test1) {
  ListNode *i6 = new ListNode(6);
  ListNode *i5 = new ListNode(2, i6);
  ListNode *i4 = new ListNode(1, i5);
  ListNode *i3 = new ListNode(7, i4);
  ListNode *i2 = new ListNode(4, i3);
  ListNode *i1 = new ListNode(3, i2);
  ListNode *i0 = new ListNode(1, i1);

  ListNode *o5 = new ListNode(6);
  ListNode *o4 = new ListNode(2, o5);
  ListNode *o3 = new ListNode(1, o4);
  ListNode *o2 = new ListNode(4, o3);
  ListNode *o1 = new ListNode(3, o2);
  ListNode *o0 = new ListNode(1, o1);

  Solution sol;
  sol.deleteMiddle(i0);

  ListNode *i = i0;
  ListNode *o = o0;
  while ((i != nullptr) || (o != nullptr)) {
    ASSERT_EQ(i->val, o->val);
    i = i->next;
    o = o->next;
  }

  delete i6;
  delete i5;
  delete i4;
  delete i3;
  delete i2;
  delete i1;
  delete i0;

  delete o5;
  delete o4;
  delete o3;
  delete o2;
  delete o1;
  delete o0;
}

TEST(tests, test2) {
  ListNode *i3 = new ListNode(4);
  ListNode *i2 = new ListNode(3, i3);
  ListNode *i1 = new ListNode(2, i2);
  ListNode *i0 = new ListNode(1, i1);

  ListNode *o2 = new ListNode(4);
  ListNode *o1 = new ListNode(2, o2);
  ListNode *o0 = new ListNode(1, o1);

  Solution sol;
  sol.deleteMiddle(i0);

  ListNode *i = i0;
  ListNode *o = o0;
  while ((i != nullptr) || (o != nullptr)) {
    ASSERT_EQ(i->val, o->val);
    i = i->next;
    o = o->next;
  }

  delete i3;
  delete i2;
  delete i1;
  delete i0;

  delete o2;
  delete o1;
  delete o0;
}

TEST(tests, test3) {
  ListNode *i1 = new ListNode(1);
  ListNode *i0 = new ListNode(2, i1);

  ListNode *o0 = new ListNode(2);

  Solution sol;
  sol.deleteMiddle(i0);

  ListNode *i = i0;
  ListNode *o = o0;
  while ((i != nullptr) || (o != nullptr)) {
    ASSERT_EQ(i->val, o->val);
    i = i->next;
    o = o->next;
  }

  delete i1;
  delete i0;

  delete o0;
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
