class Solution:
    def validPalindrome(self, s: str) -> bool:

        length = len(s)

        def check(low, high):
            i, k = low, high

            while i < k:
                if s[i] == s[k]:
                    i += 1
                    k -= 1
                else:
                    return False

            return True

        low = 0
        high = len(s) - 1

        while low < high:
            if s[low] == s[high]:
                low += 1
                high -= 1
            else:
                return check(low + 1, high) or check(low, high - 1)

        return True