class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        rests = {}
        for i, n in enumerate(nums):
            if (r := rests.get(n)) is not None:
                return [r, i]
            k = target - n
            rests[k] = i


NUMS = [2, 7, 11, 15]
TARGET = 9

print(Solution().twoSum(NUMS, TARGET))
