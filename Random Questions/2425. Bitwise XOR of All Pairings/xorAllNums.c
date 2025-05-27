// works, used ai for memory and time constraints

#include <stdlib.h>

int xorAllNums(int *nums1, int nums1Size, int *nums2, int nums2Size) {

  int xor1 = 0;
  for (int i = 0; i < nums1Size; i++) {
    xor1 ^= nums1[i];
  }

  int xor2 = 0;
  for (int i = 0; i < nums2Size; i++) {
    xor2 ^= nums2[i];
  }

  int answer = 0;
  if (nums1Size % 2 != 0) {
    answer ^= xor2;
  }
  if (nums2Size % 2 != 0) {
    answer ^= xor1;
  }

  return answer;
}

/* int xorAllNums(int *nums1, int nums1Size, int *nums2, int nums2Size) {

  int answer = 0;
  for (int i = 0; i < nums1Size; i++) {
    for (int j = 0; j < nums2Size; j++) {
      answer ^= nums1[i] ^ nums2[j];
    }
  }

  return answer;
} */

/* int xorAllNums(int *nums1, int nums1Size, int *nums2, int nums2Size) {

  int *nums3 = (int *)malloc(100000 * sizeof(nums3[0]));
  if (nums3 == NULL) {
    return -1;
  }

  for (int i = 0; i < nums1Size; i++) {
    for (int j = 0; j < nums2Size; j++) {
      nums3[i * nums2Size + j] = nums1[i] ^ nums2[j];
    }
  }

  int answer = nums3[0];
  for (int i = 1; i < nums1Size * nums2Size; i++) {
    answer = answer ^ nums3[i];
  }

  free(nums3);

  return answer;
} */
