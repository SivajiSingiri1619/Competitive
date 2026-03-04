int missingNumber(int* nums, int numsSize) {
    int i,sum=0,ans,sum_n;
    for(i=0;i<numsSize;i++){
        sum=sum+nums[i];
    }
    sum_n=(numsSize*(numsSize+1))/2;
    ans=sum_n-sum;
    return ans;
}