"""tests"""

from pair_sum import ListNode, Solution


def test_1():
    """test1"""
    lst1 = ListNode(1)

    lst2 = ListNode(2, lst1)

    lst4 = ListNode(4, lst2)

    lst5 = ListNode(5, lst4)

    sol = Solution()

    assert sol.pairSum(lst5) == 6

def test_2():
    """test2"""
    lst3 = ListNode(3)

    lst22 = ListNode(2, lst3)

    lst21 = ListNode(2, lst22)

    lst4 = ListNode(4, lst21)

    sol = Solution()

    assert sol.pairSum(lst4) == 7

def test_3():
    """test3"""
    lst100000 = ListNode(100000)

    lst1 = ListNode(1, lst100000)


    sol = Solution()

    assert sol.pairSum(lst1) == 100001
