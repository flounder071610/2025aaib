#week04-2.py 找出有幾個正數跟負數，多的那個回傳
class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        pos=0
        neg=0
        for i in range(len(nums)):
            if nums[i]>0: pos+=1
            if nums[i]<0: neg+=1
        return max(pos,neg)

