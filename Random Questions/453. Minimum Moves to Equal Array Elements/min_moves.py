# works

"""hello"""


class Solution:
    """hello"""

    def min_moves(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        min_val = min(nums)
        moves = sum(num - min_val for num in nums)
        return moves


# class Solution:
#     """hello"""
#
#     def min_moves(self, nums):
#         """
#         :type nums: List[int]
#         :rtype: int
#         """
#         count = 0
#         if len(nums) == 2:
#             return abs(nums[0] - nums[1])
#         while check_list(nums) is False:
#             index = find_max(nums)
#             nums = increment(nums, index)
#             count += 1
#         return count
#
#
# def check_list(nums):
#     """hello"""
#     for item in nums:
#         if item != nums[0]:
#             return False
#     return True
#
#
#
#
# def find_max(nums):
#     """hello"""
#     max_num = nums[0]
#     index = 0
#     for i, item in enumerate(nums):
#         if item > max_num:
#             max_num = item
#             index = i
#     return index
#
#
# def increment(nums, index):
#     """hello"""
#     for i, _ in enumerate(nums):
#         if i == index:
#             continue
#         nums[i] += 1
#     return nums


numbers = input().split(",")
for i, _ in enumerate(numbers):
    numbers[i] = int(numbers[i])

sol = Solution()
print(sol.min_moves(numbers))
