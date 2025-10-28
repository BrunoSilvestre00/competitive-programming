class Solution:
    def romanToInt(self, s: str) -> int:
        size = len(s)
        i = 0
        num = 0
        while i < size:
            if s[i] == "M":
                num += 900 if i != 0 and s[i - 1] == "C" else 1000
            elif s[i] == "D":
                num += 400 if i != 0 and s[i - 1] == "C" else 500
            elif s[i] == "C" and (i == size-1 or s[i + 1] != "M" and s[i + 1] != "D"):
                num += 90 if i != 0 and s[i - 1] == "X" else 100
            elif s[i] == "L":
                num += 40 if i != 0 and s[i - 1] == "X" else 50
            elif s[i] == "X" and (i == size-1 or s[i + 1] != "C" and s[i + 1] != "L"):
                num += 9 if i != 0 and s[i - 1] == "I" else 10
            elif s[i] == "V":
                num += 4 if i != 0 and s[i - 1] == "I" else 5
            elif s[i] == "I" and (i == size-1 or s[i + 1] != "X" and s[i + 1] != "V"):
                num += 1
            print(i, s[i], num)
            i += 1
        return num

print(Solution().romanToInt('MMMCDXC'))