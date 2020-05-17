class Solution:
    def convert(self, s: str, numRows: int) -> str:

        array = [s for i in range(numRows)]

        resArray = [list() for i in range(numRows)]

        i, d = 0, 1

        for k in range(len(s)):
            resArray[i].append(array[i][k])

            i += d

            if i == 0 or i == numRows - 1:
                d = d * (-1)

        res = ""
        print(resArray)

        result = list()
        for r in resArray:
            result.extend(r)
        for l in resArray:
            res += "".join(l)

        return "".join(result)

if __name__ == '__main__':
    solu = Solution()

    print(solu.convert(s = "LEETCODEISHIRING", numRows = 4))