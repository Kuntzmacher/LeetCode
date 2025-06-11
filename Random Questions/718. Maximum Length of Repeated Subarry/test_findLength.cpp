extern "C" {
#include "findLength.h"
}

#include <gtest/gtest.h>

TEST(TESTS, TEST1) {
  int nums1[] = {1, 2, 3, 2, 1};
  int nums1Size = 5;
  int nums2[] = {3, 2, 1, 4, 7};
  int nums2Size = 5;
  ASSERT_EQ(findLength(nums1, nums1Size, nums2, nums2Size), 3);
}

TEST(TESTS, TEST2) {
  int nums1[] = {0, 0, 0, 0, 0};
  int nums1Size = 5;
  int nums2[] = {0, 0, 0, 0, 0};
  int nums2Size = 5;
  ASSERT_EQ(findLength(nums1, nums1Size, nums2, nums2Size), 5);
}

TEST(TESTS, TEST3) {
  int nums1[] = {0, 0, 0, 0, 1};
  int nums1Size = 5;
  int nums2[] = {1, 0, 0, 0, 0};
  int nums2Size = 5;
  ASSERT_EQ(findLength(nums1, nums1Size, nums2, nums2Size), 4);
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
