class Solution {
    public int maxSubArray(int[] nums) {
        int currs =0;
        int maxs = nums[0];
        for(int i : nums){
            currs = currs+i;
            maxs = currs>maxs ? currs:maxs;
            if(currs<0){
                currs = 0;
            }
        }
        return maxs;
    }
}
