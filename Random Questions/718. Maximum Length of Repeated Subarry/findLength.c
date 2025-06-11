// not working for big array
#include "findLength.h"

int findLength(int* nums1, int nums1Size, int* nums2, int nums2Size){

	int count = 0;
	int temp = 0;

	for (int i = 0; i < nums1Size ; i++) {
		for ( int j = 0; j < nums2Size; j++ ) {
			temp = 0;
			if (nums1[i] != nums2[j]) { continue; }
			while(nums1[i] == nums2[j]) {
				temp++;
				i++;
				j++;
				if ( (i == nums1Size) || (j == nums2Size) ) { break; }
			}
			i -= temp;
			j -= temp;
			if ( temp > count ) { count = temp; }
		}
	}

	return count;

}
