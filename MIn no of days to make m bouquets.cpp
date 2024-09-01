class Solution {
public:
    long long function(vector<int>& bloomDay,long long mid, int m, int k){
        long long count=0,ans=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid){
                count++;
            }else{
                ans+=count/k;
                count=0;
            }
        }
        ans+=count/k;

        return ans;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long l=*min_element(bloomDay.begin(),bloomDay.end());
        long long r=*max_element(bloomDay.begin(),bloomDay.end());
        long long mid=0;
        long long n=0;
        if ((long long)bloomDay.size() < (long long)m * k) return -1;
        while(l<=r){
            mid=l+(r-l)/2;
            n=function(bloomDay,mid,m,k);

            if(n>=m){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return l;
    }
};
