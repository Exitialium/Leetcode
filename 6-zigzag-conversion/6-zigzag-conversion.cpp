class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) {
            return s;
        }
        int firstGap = (numRows - 1) * 2;
        int secondGap = 0;
        string ans = "";
        int iter = 0;
        int row = 0;
        int state = 0;
        while (ans.length() < s.length()) {
            ans += s[iter];
            if ((state == 0 && firstGap != 0)|| secondGap == 0) {
                iter += firstGap;
                state = 1;
            } 
            else {
                iter += secondGap;
                state = 0;
            }
            if (iter >= s.length()) {
                row += 1;
                iter = row;
                state = 0;
                firstGap -= 2;
                secondGap += 2;
            }
        }
        return ans;
    }
};