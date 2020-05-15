class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        d = {0: 1}
        sum = 0
        count = 0

        for i in range(0, len(nums)):
            sum += nums[i]
            count += d.get(sum - k, 0)
            d[sum] = d.get(sum, 0) + 1

        return count