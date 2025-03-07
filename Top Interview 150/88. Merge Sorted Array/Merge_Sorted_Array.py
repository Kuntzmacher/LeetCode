class Solution(object):
    def merge(self, nums1, m, nums2, n):
        """
        :type nums1: List[int]
        :type m: int
        :type nums2: List[int]
        :type n: int
        :rtype: None Do not return anything, modify nums1 in-place instead.
        """

        for index, item in enumerate(reversed(nums1)):
            if item == 0:
                nums1.pop(m-index-1)
            else:
                break

        m = len(nums1)

        for index, item in enumerate(reversed(nums2)):
            if item == 0:
                nums2.pop(n-index-1)
            else:
                break

        n = len(nums2)

        arr = [ ]
        for i in range(m+n):
            arr.append('0')

        i = 0
        j = 0

        while ( ( i < m ) and ( j < n ) ):

            if nums1[i] < nums2[j]:
                arr[i+j] = nums1[i]
                i += 1
            else:
                arr[i+j] = nums2[j]
                j += 1

        while ( i < m ):
            arr[i+j] = nums1[i]
            i += 1

        while ( j < n ):
            arr[i+j] = nums2[j]
            j += 1

        nums1 = arr

        print(nums1)

nums1 = input() # first arr
nums1 = nums1.split(",")
nums2 = input() # second arr
nums2 = nums2.split(",")

nums1 = [1,2,3,0,0,0]
nums2 = [2,5,6]

sol = Solution()
Solution.merge(sol, nums1=nums1, m=3, nums2=nums2, n=3)
