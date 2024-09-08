class Solution {
public:
   void fun(int ind, vector<int>& nums, vector<int>& arr, vector<vector<int>>& res, int n) {
        if (ind == n) {
            res.push_back(arr);  
            return;
        }
        fun(ind + 1, nums, arr, res, n);
        arr.push_back(nums[ind]);
        fun(ind + 1, nums, arr, res, n);
        arr.pop_back(); 
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> arr;
        fun(0, nums, arr, res, nums.size());
        return res;
    }
};
