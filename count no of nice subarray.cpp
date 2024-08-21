class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
      int l=0,r=0,count=0,odd=0,result=0;
      while(r<nums.size()){
        if(nums[r]%2!=0){
            count++;
        }
        while(count > k){
            if(nums[l]%2!=0){
                count--;
            }
            l++;
        }
        if (count == k) {
                int temp = l;
                while (temp <= r && nums[temp] % 2 == 0) {
                    temp++;
                }
                result += (temp - l + 1);
            }
        r++;
      }
      return result;  
    }
};
