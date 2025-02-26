#week02-3-py 寫LeetCode
#LeetCode 1. Two Sum
#有一堆數字nums 裡面哪兩個數相加是target
#nums[i]+nums[j]==target 找到i加j使得加起來是target
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box={}#有一個箱子放出現過的數字
        #要湊出target這個數字的加總
        for i ,num in enumerate(nums):
            other = target - num#另外一個需要的數字，可以湊出target
            if other in box:#在箱子裡，有另一個需要的數
                return [box[other],i]#找到答案
            else:#如果沒有合適的數字能湊
                box[num]=i #就把現在的數字num，放到box裡面
