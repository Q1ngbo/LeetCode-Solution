class Solution:
    def rob(self, nums: List[int]) -> int:
        if len(nums) < 1:
            return 0

        if len(nums) == 1:
            return nums[0]

        res = []
        res.append(nums[0])
        res.append(max(nums[0], nums[1]))

        for i in range(2, len(nums)):
            val = nums[i] + res[i - 2]
            res.append(max(val, res[i - 1]))

        return res[-1]