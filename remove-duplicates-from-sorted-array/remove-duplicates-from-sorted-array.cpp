class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int prevValue = -1;
        vector<int> ans;
        while (i < nums.size()) {
            if (i != 0 && nums[i] == prevValue) {
                i++;
            } else {
                prevValue = nums[i];
                ans.push_back(nums[i]);
                i++;
            }
        }
        nums = ans;
        return nums.size();
    }
};