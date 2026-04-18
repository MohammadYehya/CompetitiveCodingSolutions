class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        vector<vector<int>> bucket(nums.size()+1);
        vector<int> res;

        for (auto i: nums) freq[i] ++;
        for (auto i: freq) bucket[i.second].push_back(i.first);
        for (int i = bucket.size() - 1; i > 0; i--) {
            for (auto val: bucket[i]) res.push_back(val);
            if (res.size() == k) return res;
        }
        
        return res;
    }
};
