class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map <int,int> visited ;
        for (int i = 0; i < nums.size(); i++ ) {
            if (visited.find(target - nums[i]) == visited.end()) {
                visited[nums[i]] = i;
            } else {
                ans.push_back(visited[target - nums[i]]);
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};