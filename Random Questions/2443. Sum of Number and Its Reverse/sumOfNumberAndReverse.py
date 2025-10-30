class Solution():
    def sumOfNumberAndReverse(self, num):
        """
        :type num: int
        :rtype: bool
        """

        if num == 0:
            return True

        for i in range(num):
            small = i
            big = int(str(small)[::-1])

            if small + big == num:
                return True

        return False



num = int(input(""))
sol = Solution()
print(sol.sumOfNumberAndReverse(num))
