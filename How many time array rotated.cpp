int findKRotation(vector<int> &arr) {
        int l=0,r=arr.size()-1,mid=0,small=INT_MAX,ans=0;
        if(arr[l]<=arr[mid] && arr[mid]<=arr[r])return l;
        while(l<=r){
            mid=l+(r-l)/2;
            if(arr[l]<=arr[mid]){
                if(arr[l]<small){
                    ans=l;
                    small=arr[l];
                }                
                l=mid+1;
            }else{
                if(arr[mid]<small){
                    ans=mid;
                    small=arr[mid];
                }
                r=mid-1;
            }
        }
        return ans;
    }
