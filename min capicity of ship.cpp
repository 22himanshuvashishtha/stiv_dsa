class Solution {
public:
    int function(vector<int>& weights,int mid){
        int count=0;
        int ans=0;
        int days=1;
        for(int i=0;i<weights.size();i++){
            ans+=weights[i];
            if (ans > mid) {
                days++;
                ans = weights[i]; 
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l=*max_element(weights.begin(),weights.end());
        int r=0;
        for(int i=0;i<weights.size();i++){
            r+=weights[i];
        }
        int mid=0;
        int n=0;
        while(l<=r){
            mid=l+(r-l)/2;
            n=function(weights,mid);
            if(n<=days){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return l;
    }
};
