# not finished :(

"""
hello
"""


class Solution:
    """
    hello
    """

    def canPartitionKSubsets(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: bool
        """

        nums_sum = 0
        nums_sums = []
        for num in nums:
            nums_sum += num
            nums_sums += nums_sum

        if nums_sum % k != 0:
            return False

        nums = sorted(nums)
        if nums[-1] > nums_sum / k:
            return False

        temp = nums_sum / k
        temp_sum = 0
        while nums:
            if nums[-1] == temp:
                nums.remove(nums[-1])
                continue


nums = input()
nums = nums.split(",")
k = input()

sol = Solution()

print(sol.canPartitionKSubsets(nums, k))
