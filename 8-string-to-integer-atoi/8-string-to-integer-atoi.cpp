class Solution {
public:
    int myAtoi(string s) {
        long int ans = 0;
        int negative = 0;
        int iter = 0;
        while (s[iter] == ' ') {
            iter += 1;
        }
        while (s[iter] < '0' || s[iter] > '9') {
            if (negative != 0) {
                return 0;
            } else if (s[iter] == '+') {
                negative = -1;
            } else if (s[iter] == '-') {
                negative = +1;
            } else {
                return 0;
            }
            iter ++;
        } 
        while (s[iter] >= '0' && s[iter] <= '9') {
            ans *= 10;
            if (negative == 1) {
                ans -= s[iter] - '0';
            } else {
                ans += s[iter] - '0';
            }
            if (ans > INT_MAX) {
                return INT_MAX;
            }
            if (ans < INT_MIN) {
                return INT_MIN;
            }
            iter ++;
        } 
        return ans;
    }
};