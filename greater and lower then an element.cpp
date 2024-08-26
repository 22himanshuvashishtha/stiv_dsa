class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        sort(arr.begin(),arr.end());
        int l=0,r=arr.size()-1,mid=0;
        int ans=-1;
        int ans1=-1;
        while(l<=r){
            mid=l+(r-l)/2;
            if(x==arr[mid]){
                return {arr[mid], arr[mid]};
                }else if(x>arr[mid]){
                    ans=arr[mid];
                    l=mid+1;
                }else{
                    ans1=arr[mid];
                    r=mid-1;
                }
            }
            return {ans,ans1};
        }
};
