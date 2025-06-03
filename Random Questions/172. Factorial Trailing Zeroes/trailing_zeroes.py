# working

"""trailing zeroes"""


class Solution:
    """solution"""

    def trailing_zeroes(self, n):
        """
        :type n: int
        :rtype: int
        """

        count = 0

        while n > 0:
            n //= 5
            count += n

        return count

    # def trailing_zeroes(self, n):
    #     """
    #     :type n: int
    #     :rtype: int
    #     """
    #
    #     f = 1
    #     count = 0
    #
    #     while n > 0:
    #         f *= n
    #         n -= 1
    #
    #     while (f % 10) == 0:
    #         count += 1
    #         f //= 10
    #
    #     return count


num = int(input())

sol = Solution()

print(sol.trailing_zeroes(num))
