#week04-1.py 二合一
class Solution:
    def coloredCells(self, n: int) -> int:
        ans=0 #迴圈前面ans先清空
        for i in range(1,n*2,2):
            ans+=i#把1,3,5,7的數加入ans
        for i in range(1,n*2-1,2):
            ans+=i#把1,3,5的數加入ans
        return ans

