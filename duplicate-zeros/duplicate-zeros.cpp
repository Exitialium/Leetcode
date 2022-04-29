class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int i = 0;
        int n = arr.size();
        vector<int> ans;
        while (ans.size() < n) {
            if (ans.size() == n - 1 || arr[i] != 0) {
                ans.push_back(arr[i]);
            } else {
                ans.push_back(0);
                ans.push_back(0);
            }
            i++;
        }
        arr = ans;
    }
};