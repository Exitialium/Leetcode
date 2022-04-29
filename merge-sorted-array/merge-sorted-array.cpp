class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j = 0, k = 0;
        vector<int> ans;
        while (j != m && k != n) {
            if (nums1[j] < nums2[k]) {
                ans.push_back(nums1[j]);
                j++;
            } else if (nums2[k] < nums1[j]) {
                ans.push_back(nums2[k]);
                k++;
            } else {
                ans.push_back(nums1[j]);
                ans.push_back(nums2[k]);
                j++;
                k++;
            }
        }
        while(k != n) {
            ans.push_back(nums2[k]);
            k++;
        }
        while(j != m) {
            ans.push_back(nums1[j]);
            j++;
        }
        nums1 = ans;
    }
};