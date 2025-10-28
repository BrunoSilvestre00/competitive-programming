class Solution:
    def isPalindrome(self, x: int) -> bool:
        return x >= 0 and ((s := str(x)) == s[::-1])
