#include <vector>
#include <unordered_map>
using namespace std;

// Bruteforce
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i+1; j < nums.size(); j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

// Hashmap Solution
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> hashmap;
        for(int i = 0; i < nums.size(); i++)
        {
            int valy = target - nums[i];
            if(hashmap.find(valy)!=hashmap.end())
            {
                return {hashmap[valy], i};
            }
            hashmap.insert({nums[i], i});
        }
        return {};
    }
};