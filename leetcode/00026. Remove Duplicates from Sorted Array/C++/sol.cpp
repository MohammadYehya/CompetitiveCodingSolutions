// Classical While Loop Solution
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=1;
        int count=1;
        int n=nums.size();
        while(j<n)
        {
            if(nums[j]!=nums[i]) nums[++i]=nums[j];
            j++;
        }
        return i+1;
    }
};

// STL Solution
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        std::set<int> s(nums.begin(), nums.end());
        nums = std::vector<int>(s.begin(), s.end());
        return s.size();
    }
};