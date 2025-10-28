from typing import List


class Solution:
    def twoSum2(self, numbers: List[int], target: int) -> List[int]:
        i, j = 0, len(numbers) - 1
        while True:
            s = numbers[i] + numbers[j]
            if s < target:
                i += 1
            elif s > target:
                j -= 1
            else:
                return [i+1, j+1]
            
NUMBERS = [-1,0]
TARGET = -1

print(Solution().twoSum2(NUMBERS, TARGET))
            
        