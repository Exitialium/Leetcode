#include <bits/stdc++.h>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = s.size();
        int i = 0;
        int res = 0;
        vector<int> lastPos(256,-1);
        for(int j = 0; j < l; j++ ){
            i = max(i,lastPos[s[j]]+1);
            res = max(res, j - i + 1);
            lastPos[s[j]] = j;
        }
        return res;
    }
};