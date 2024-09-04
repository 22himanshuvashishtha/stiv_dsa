class Solution {
public:
    bool fun(vector<char>& v,int l,int r){
        if(l>=r)return true;

        if(v[l]!=v[r])return false;

        return fun(v,l+1,r-1);
    }
    bool isPalindrome(string s) {
        vector<char>v;
        for(int i=0;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z'){
                v.push_back(s[i]);
            }else if(s[i]>='A' && s[i]<='Z'){
                v.push_back(s[i]+32);
            }else if (s[i] >= '0' && s[i] <= '9') {  
                v.push_back(s[i]);  
            }else{
                continue;
            }
        }
        return  fun(v,0,v.size()-1);
    }
};
