class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int l=0,r=0,maxlen=0;
        while(r<nums.size()){
            if(nums[r]==0){
              maxlen=max(maxlen,r-l);
              l=r+1;
            }
            r++;
        }
        maxlen=max(maxlen,r-l);
        return maxlen;
    }
};
