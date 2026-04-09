class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (map.contains(diff)) return {map[diff], i};
            map.insert({nums[i], i});
        }
        return {};
    }
};
