//week04-2.c ��X���X�ӥ��Ƹ�t�ơA�h�����Ӧ^��
int maximumCount(int* nums, int numsSize) {
    int pos=0,neg=0; //�j��e������0
    for(int i=0;i<numsSize;i++){
        if(nums[i]>0) pos++;//����
        if(nums[i]<0) neg++;//�t��
    } //�j�餤���A��s �ק�L
    //�j��᭱�A�⥦���ӥ�
    if(pos>neg) return pos; //���Ʀh�A�N����
    else return neg; //���M�A�N�t��

}
