import pytest
from rob import Solution, TreeNode


def test_1():

    leaf3l = TreeNode(val=3)
    leaf2 = TreeNode(val=2, right=leaf3l)

    leaf1 = TreeNode(val=1)
    leaf3r = TreeNode(val=3, right=leaf1)

    root = TreeNode(val=3, left=leaf2, right=leaf3r)

    sol = Solution()

    assert sol.rob(root) == 7


def test_2():

    leaf1l = TreeNode(val=1)
    leaf3 = TreeNode(val=3)
    leaf4 = TreeNode(val=4, left=leaf1l, right=leaf3)

    leaf1r = TreeNode(val=1)
    leaf5 = TreeNode(val=5, right=leaf1r)

    root = TreeNode(val=3, left=leaf4, right=leaf5)

    sol = Solution()

    assert sol.rob(root) == 9
