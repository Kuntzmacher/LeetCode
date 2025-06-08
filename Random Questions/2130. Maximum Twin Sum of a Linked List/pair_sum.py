# works

"""pair sum"""


class ListNode:
    """list node"""

    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    """solution"""

    def pairSum(self, head):
        """pair sum"""
        arr = self.make_array(head)
        n = 0

        for i in range(len(arr) // 2):
            n = max(n, arr[i] + arr[len(arr) - i - 1])

        return n

    def make_array(self, head):
        """count items"""
        arr = []
        while head.next is not None:
            arr.append(head.val)
            head = head.next
        arr.append(head.val)
        return arr
