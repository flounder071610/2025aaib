#week02-3-py �gLeetCode
#LeetCode 1. Two Sum
#���@��Ʀrnums �̭�����ӼƬۥ[�Otarget
#nums[i]+nums[j]==target ���i�[j�ϱo�[�_�ӬOtarget
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box={}#���@�ӽc�l��X�{�L���Ʀr
        #�n��Xtarget�o�ӼƦr���[�`
        for i ,num in enumerate(nums):
            other = target - num#�t�~�@�ӻݭn���Ʀr�A�i�H��Xtarget
            if other in box:#�b�c�l�̡A���t�@�ӻݭn����
                return [box[other],i]#��쵪��
            else:#�p�G�S���X�A���Ʀr���
                box[num]=i #�N��{�b���Ʀrnum�A���box�̭�
