from typing import List


class Solution:
    def maxProfit(self, prices: List[int]) -> int:

        if len(prices) < 2:
            return 0

        minp = prices[0]
        maxv = 0

        for i in range(len(prices)):
            if minp > prices[i]:
                minp = prices[i]

            if prices[i] - minp > maxv:
                maxv = prices[i] - minp

        return maxv