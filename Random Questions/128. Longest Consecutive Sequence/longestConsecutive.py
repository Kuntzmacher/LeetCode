class Solution():
    def longestConsecutive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if nums == []:
            return 0
        consec = 1
        max_consec = 1
        prev = sorted(nums)[0]
        for num in sorted(nums):
            if num == prev + 1:
                consec += 1
                max_consec = max(max_consec, consec)
            elif num != prev:
                consec = 1
            prev = num

        return max_consec



numbers = input().split(',')
nums = []
for number in numbers:
    nums.append(int(number))

sol = Solution()
print(sol.longestConsecutive(nums))
