class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=0,r=1,temp=0;
        while(r<nums.size()){
            if(nums[l]!=0){
                l++;
                r++;
            }else{
            if(nums[l]==0){
                if(nums[r]!=0){
                    swap(nums[l],nums[r]);
                    l++;
                }
            }
            r++;
            }
        }
        for(int i=0;i<nums.size();i++){
            cout<<nums[i];
        }
    }
};
