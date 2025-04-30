//week11-4.cpp
//1295. Find Numbers with Even Number of Digits
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0; //癹伴玡ans琌0
        for(int i=0;i<nums.size();i++){
            int now = nums[i]; //瞷璶矪瞶nums[i]
            //Q:笵nums[i]琌碭计?
            int digits = 0; //Τ碭计?
            while(now>0){ //ブ猭
                digits++; //娩计碭Ω
                now = now/10; //计禫禫
            }
            if(digits%2==0) ans++; //癹伴案计计ans++
        }
        return ans; //癹伴ansㄓノ
    }
};
