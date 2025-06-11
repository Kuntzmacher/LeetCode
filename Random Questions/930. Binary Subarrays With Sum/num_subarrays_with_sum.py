"""num subarrays with sum"""


class Solution:
    """solution"""

    def num_subarrays_with_sum(self, nums, goal):
        """num subarrays with sum"""

        prefix = {0: 1}
        curr_sum = 0
        count = 0

        for num in nums:
            curr_sum += num
            if curr_sum - goal in prefix:
                count += prefix[curr_sum - goal]
            prefix[curr_sum] = prefix.get(curr_sum, 0) + 1

        return count


nums = input().split(",")

for index, num in enumerate(nums):
    nums[index] = int(num)

goal = int(input())

sol = Solution()
print(sol.num_subarrays_with_sum(nums, goal))
