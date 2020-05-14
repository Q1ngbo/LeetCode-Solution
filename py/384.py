'''
    打乱数组
'''
import random
from typing import List


class Solution:

    def __init__(self, nums: List[int]):
        self.original = nums

    def reset(self) -> List[int]:
        """
        Resets the array to its original configuration and return it.
        """

        return self.original

    def shuffle(self) -> List[int]:
        """
        Returns a random shuffling of the array.
        """
        tmplist = self.original.copy()
        res = []
        while tmplist:
            res.append(tmplist.pop(random.randint(0, len(tmplist) - 1)))

        return res
