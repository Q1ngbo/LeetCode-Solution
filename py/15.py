from typing import List


class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        d = {}
        length = len(nums)

        for i in range(0, length):
            for k in range(i, length):
                sumTmp = nums[i] + nums[k]
                d[sumTmp] = d.get(sumTmp, [])
                if d[sumTmp] == None:
                    d[sumTmp] = [nums[i], nums[k]]
                else:
                    liT = [nums[i], nums[k]]
                    if liT not in d[sumTmp]:
                        d[sumTmp].append(liT)


        res = []



        for i in range(0, length):
            target = -nums[i]

            search = d.get(target, [])
            if len(search) != 0:
                for sT in search:
                    sT.append(nums[i])
                    if sT not in res:
                        res.append(sT)

        return res

if __name__ == '__main__':
    Solu = Solution()

    print(Solu.threeSum([-1, 0, 1, 2, -1, -4]))
