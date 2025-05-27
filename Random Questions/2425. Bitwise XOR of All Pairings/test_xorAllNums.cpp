extern "C" {
#include "xorAllNums.h"
}
#include <gtest/gtest.h>

TEST(tests, first) {
  int nums1[3] = {2, 1, 3};
  int nums1Size = 3;
  int nums2[4] = {10, 2, 5, 0};
  int nums2Size = 4;
  ASSERT_EQ(xorAllNums(nums1, nums1Size, nums2, nums2Size), 13);
}

TEST(tests, second) {
  int nums1[3] = {1, 2};
  int nums1Size = 2;
  int nums2[4] = {3, 4};
  int nums2Size = 2;
  ASSERT_EQ(xorAllNums(nums1, nums1Size, nums2, nums2Size), 0);
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
