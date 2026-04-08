class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for(int i: nums){
            if (set.contains(i)) return true;
            else set.insert(i);
        }
        return false;
    }
};