#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int hash[256]={-1}; 
    int r = 0, l = 0;
    int n = s.size();
    int maxlen = 0;
    
    while (r < n) {
        if (hash[s[r]] != -1 && hash[s[r]] >= l) {
            l = hash[s[r]] + 1; 
        }
        hash[s[r]] = r;  
        maxlen = max(maxlen, r - l + 1); 
        r++;
    }
    cout << maxlen << endl; 
    return 0;
}
