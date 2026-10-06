class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        ans = nums[0]
        counter = 0
        for x in nums:
            if x == ans:
                counter += 1
            else:
                counter -= 1
                if counter < 0:
                    ans = x
                    counter = 1
        return ans