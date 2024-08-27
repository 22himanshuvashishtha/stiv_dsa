class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        return {binary1(nums,target),binary2(nums,target)};
    }
    int binary1(vector<int>&nums,int target){
        int l=0,r=nums.size()-1,mid=0,ans=-1;
        while(l<=r){
            mid=l+(r-l)/2;
            if(nums[mid]==target){
                r=mid-1;
                ans=mid;
            }
            else if(nums[mid]>target){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return ans;
    }
    int binary2(vector<int>& nums ,int target){
        int l=0,r=nums.size()-1,mid=0,ans=-1;
        while(l<=r){
            mid=l+(r-l)/2;
            if(nums[mid]==target){
                l=mid+1;
                ans=mid;
            }
            else if(nums[mid]>target){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return ans;
    }
};
