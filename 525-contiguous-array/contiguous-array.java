class Solution {
    public int findMaxLength(int[] nums) {
        HashMap<Integer,Integer> hm=new HashMap<>();
        hm.put(0,-1);
        if(nums[0]==0){
            nums[0]=-1;
        }
        for(int i=1;i<nums.length;i++){
            if(nums[i]==0){
                nums[i]=nums[i-1]-1;
            }
            else{
                nums[i]=nums[i-1]+1;
            }
        }
        int s=0;
        for(int j=0;j<nums.length;j++){
            if(hm.containsKey(nums[j])){
                s=Math.max(s,j-hm.get(nums[j]));
            }
            else{
                hm.put(nums[j],j);
            }
        }
        return s;
    }
}