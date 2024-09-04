#include <iostream>
#include <vector>
using namespace std;

void fun(vector<int>& v,int l,int r){
    if(l>=r)return ;
    
    swap(v[l],v[r]);
    fun(v,l+1,r-1);
}
int main() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int l=0;
    int r=n-1;
    fun(v,l,r);
    for(int i=0;i<n;i++){
        cout<<v[i];
    }
    return 0;
}
