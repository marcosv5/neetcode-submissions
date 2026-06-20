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

/*
map stores <num, numIndex>, we go through the array checking if target - the number we're currently
at = a number we have in our map, if it does then we found both numbers and return both indices, if not 
we store current number and its index in our map.
*/
