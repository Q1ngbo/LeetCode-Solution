class Solution:
    def singleNumber(self, nums: List[int]) -> int:

        hashTable = {}

        for i in nums:
            hashTable[i] = hashTable.get(i, 0) + 1

        for key in hashTable.keys():
            if hashTable.get(key, 0) == 1:
                return key