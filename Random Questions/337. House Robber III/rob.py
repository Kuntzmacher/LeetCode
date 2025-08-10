class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def rob(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: int
        """

        return max(self.helper(root))

    def helper(self, root):
        if root is None:
            return [0, 0]

        left = self.helper(root.left)
        right = self.helper(root.right)

        included = root.val + left[1] + right[1]
        excluded = max(left[0], left[1]) + max(right[0], right[1])

        return [included, excluded]
