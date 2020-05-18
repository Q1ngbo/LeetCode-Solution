class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        length = len(nums)

        if length < 2:
            return nums[0]

        maxdp = []
        mindp = []

        maxn = nums[0]

        maxdp.append(nums[0])
        mindp.append(nums[0])

        for i in range(1, length):
            maxT = maxdp[i - 1] * nums[i]
            minT = mindp[i - 1] * nums[i]

            mulT = max(maxT, minT, nums[i])
            maxdp.append(mulT)
            mindp.append(min(maxT, minT, nums[i]))

            if mulT > maxn:
                maxn = mulT

        return maxn