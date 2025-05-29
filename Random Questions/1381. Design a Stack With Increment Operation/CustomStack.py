"""
a custom stack with an increment operation
"""


class CustomStack:
    """
    a custom stack with an increment operation
    """

    def __init__(self, maxSize):
        """
        :type maxSize: int
        """
        self.maxSize = maxSize
        self.index = 0
        self.stack = [-1] * self.maxSize

    def push(self, x):
        """
        :type x: int
        :rtype: None
        """
        if self.index < self.maxSize:
            self.stack[self.index] = x
            self.index += 1
        else:
            return -1
        return None

    def pop(self):
        """
        :rtype: int
        """
        if self.index == 0:
            return -1

        temp = self.stack[self.index - 1]
        self.stack[self.index - 1] = -1
        self.index -= 1
        return temp

    def increment(self, k, val):
        """
        :type k: int
        :type val: int
        :rtype: None
        """
        k = min(k, self.index)

        for i in range(k):
            self.stack[i] += val
