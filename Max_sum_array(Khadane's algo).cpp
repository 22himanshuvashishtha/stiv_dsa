class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int large=nums[0];
        int sum=0;
        int r=0;
        while(r<nums.size()){
            sum+=nums[r];
            if(sum>large){
                large=sum;
            }
            if(sum<0)sum=0;
            r++;
        }
        return large;
    }
};
