class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int prevValue = -1;
        while (i < nums.size()) {
            if (i != 0 && nums[i] == prevValue) {
                nums.erase(nums.begin() + i);
            } else {
                prevValue = nums[i];
                i++;
            }
        }
        return nums.size();
    }
};