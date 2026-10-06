class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        size = len(nums)
        i = j = 0
        while(i < size):
            if(nums[i] != val):
                nums[j] = nums[i]
                print(nums[j])
                j+=1
            i+=1
        return j