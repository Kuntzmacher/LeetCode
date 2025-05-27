# working :)

"""hello"""


class Solution:
    """hello"""

    def __init__(self):
        self.name = "hello"

    def __main__(self):
        self.name = "hello"

    def maximum_gap(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        if len(nums) == 1:
            return 0

        nums = sorted(nums)

        diff = 0

        for index, _ in enumerate(nums):

            if index + 1 == len(nums):
                break

            diff = max(diff, nums[index + 1] - nums[index])

        return diff


nums = input()
nums = nums.split(",")

numnums = []

for index, num in enumerate(nums):
    numnums.append(int(num))

sol = Solution()
print(sol.maximum_gap(numnums))
