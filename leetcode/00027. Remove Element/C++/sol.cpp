// Classical Solution
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

// Using STL Iterators
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for (auto i = nums.begin(); i != nums.end();){
            if (*i == val) i = nums.erase(i);
            else i++;
        }
        return nums.size();
    }
};

// Using std::algorithm
#include <algorithm>
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        nums.erase(std::remove(nums.begin(), nums.end(), val), nums.end());
        return nums.size();
    }
};