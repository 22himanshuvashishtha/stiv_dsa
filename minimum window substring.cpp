class Solution {
public:
    string minWindow(string s, string t) {
        int r = 0, l = 0, minlen = INT_MAX, sd = 0;
        int hash[256] = {0};
        int count = 0;

        for (char c : t) {
            hash[c]++;
        }

        while (r < s.length()) {
            if (hash[s[r]] > 0) {
                count++;
            }
            hash[s[r]]--;
            while (count == t.length()) {
                if (r - l + 1 < minlen) {
                    minlen = r - l + 1;
                    sd = l;
                }

                hash[s[l]]++;
                if (hash[s[l]] > 0) {
                    count--;
                }
                l++;
            }
            r++;
        }

        if (minlen == INT_MAX) {
            return "";
        } else {
            return s.substr(sd, minlen);
        }
    }
};
