'''
    二叉树的层序遍历
'''
from typing import List

class TreeNode:
    def __init__(self, val, left, right):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def levelOrder(self, root: TreeNode) -> List[List[int]]:
        res = []

        tree = [root]

        while tree:
            tmp = []
            nextTree = []

            for tr in tree:
                if tr:
                    tmp.append(tr.val)
                    nextTree.extend([tr.left, tr.right])
            if tmp:
                res.append(tmp)
            tree = nextTree

        return res