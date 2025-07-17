#include "MyHashSet.h"

#include <gtest/gtest.h>

TEST(TESTS, TEST1) {
  MyHashSet *myHashSet = new MyHashSet();
  myHashSet->add(1);                    // set = [1]
  myHashSet->add(2);                    // set = [1, 2]
  ASSERT_TRUE(myHashSet->contains(1));  // return True
  ASSERT_FALSE(myHashSet->contains(3)); // return False, (not found)
  myHashSet->add(2);                    // set = [1, 2]
  ASSERT_TRUE(myHashSet->contains(2));  // return True
  myHashSet->remove(2);                 // set = [1]
  ASSERT_FALSE(myHashSet->contains(2)); // return False, (already removed)
  delete myHashSet;
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
