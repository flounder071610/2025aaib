//week04-2.c тΤ碭タ计蛤璽计ê肚
int maximumCount(int* nums, int numsSize) {
    int pos=0,neg=0; //癹伴玡常0
    for(int i=0;i<numsSize;i++){
        if(nums[i]>0) pos++;//タ计
        if(nums[i]<0) neg++;//璽计
    } //癹伴い丁穝 э
    //癹伴рウㄓノ
    if(pos>neg) return pos; //タ计碞タ计
    else return neg; //ぃ礛碞璽计

}
