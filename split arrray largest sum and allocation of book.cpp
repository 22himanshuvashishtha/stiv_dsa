class Solution {
public:
    int fun(vector<int>& arr,int mid,int n,int m){
    int stu=1;
    int totalval=0;
    for(int i=0;i<n;i++){
        if(totalval+arr[i]<=mid){
            totalval += arr[i];
        }else{
            stu++;
            totalval=arr[i];
        }
    }
    return stu;
}   
int findPages(vector<int>& arr, int m) {
    int l=*max_element(arr.begin(),arr.end());
    int r = accumulate(arr.begin(), arr.end(),0);
    int mid=0;
    int ans=0;
    int n=arr.size();
    if(n<m){
        return -1;
    }else{
        while (l <= r) {
          mid = l + (r - l) / 2;
          ans = fun(arr, mid, n, m);
           if(ans>m){
            l=mid+1;
          }else{
            r=mid-1;
          }
        }
        return l;
    }
}
int splitArray(vector<int>& nums, int k) {
      return findPages(nums,k);
}
};
