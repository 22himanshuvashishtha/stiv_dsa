class Solution {
public:
    int function(vector<int>& nums,int mid,int threshold){
        long long ans = 0; 
        for (int i = 0; i < nums.size(); i++) {
        ans += static_cast<long long>(ceil((float)nums[i] / mid));
        }
        return ans;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=*min_element(nums.begin(),nums.end());
        int r=*max_element(nums.begin(),nums.end());
        int mid=0;
        if(nums.size()==threshold){
            return r;
        }
        int n=0;
        while(l<=r){
            mid=l+(r-l)/2;

        n=function(nums,mid,threshold);
        if(n<threshold){
            l=mid+1;
        }else{
            r=mid-1;
        }
        }
        return l;
    }
};
