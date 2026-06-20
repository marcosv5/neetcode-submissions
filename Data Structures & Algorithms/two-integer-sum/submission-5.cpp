class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        for (int i = 0; i < nums.size(); i++) {
            int x = target - nums[i];
            if (seen.contains(x)) return {seen[x], i};
            seen[nums[i]] = i;
        }
    }
};
