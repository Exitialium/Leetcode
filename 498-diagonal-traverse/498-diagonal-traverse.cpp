class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int i = 0;
        int j = 0;
        vector<int> ans;
        int n = mat.size();
        if (n == 0) {
            return ans;
        }
        int m = mat[0].size();
        bool up = true;
        while (ans.size() < n * m) {
            if (j >= m) {
                i += 2;
                j -= 1;
                up = !up;
            } 
            else if (i >= n) {
                i -= 1;
                j += 2;
                up = !up;
            }
            else if (i < 0) {
                i += 1;
                up = !up;
            }
            else if (j < 0) {
                j += 1;
                up = !up;
            }
            ans.push_back(mat[i][j]);
            if (up) {
                j += 1;
                i -= 1;
            } else {
                j -= 1;
                i += 1;
            }
        }
        return ans;
    }
};