class Solution {
public:
    int findMin(vector<int>& a) {
    int l=0,r=a.size()-1,mid=0;
    int m=INT_MAX;
    while(l<=r){
        mid=l+(r-l)/2;
        if(a[mid]<a[l]){
            m=min(a[mid],m);
            r=mid-1;
        }else{
            m=min(m,a[l]);
            l=mid+1;
        }
    }
    return m;
    }
};
