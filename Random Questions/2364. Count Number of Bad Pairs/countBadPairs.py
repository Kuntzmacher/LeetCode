class Solution:
    def countBadPairs(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        hashmap = {}
        good_count = 0
        bad_count = 0
        for i, num in enumerate(nums):
            calc = i - num
            good_count = hashmap.get(calc, 0)
            bad_count += i - good_count
            hashmap[calc] = good_count + 1

        return bad_count


nums = input("")
lst = []
for num in nums.split(","):
    lst.append(int(num))
sol = Solution()
print(sol.countBadPairs(lst))
