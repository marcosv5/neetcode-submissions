class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for (int n : nums) {
            count[n]++;
        }

        vector<vector<int>> buckets(nums.size() + 1);
        for (auto& p : count) {
            buckets[p.second].push_back(p.first); // idx is number of occurances, the vector at said idx
        }                                         // has the numbers that occur idx times
        
        vector<int> result;
        // start from largest idx (most frequent numbers), and add to result vector
        for (int i = buckets.size() - 1; i > 0; i--) {
            for (int num : buckets[i]) {
                result.push_back(num);
                if (result.size() == k) {
                    return result;
                }
            }
        }

        return result;
    }
};
