class Solution {
public:
    int numberOfSubstrings(string s) {
        int l=0,r=0,len=0,count=0,result=0;
        int hash[3]={0};
        while(r<s.length()){
           hash[s[r]-'a']++;
           while (hash[0] > 0 && hash[1] > 0 && hash[2] > 0){
            result+=(s.length()-r);
            hash[s[l]-'a']--;
           l++;
           }
           r++;
        }
        return result;
    }
};
