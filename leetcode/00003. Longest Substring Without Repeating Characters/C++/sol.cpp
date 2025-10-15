// Sliding Window Approach with HashSet
class Solution {
    public:
    int lengthOfLongestSubstring(string s) {
        int ls = 0, left = 0, right = 0;
        unordered_set<char> us;
        while (left < s.length()) {
            while(right < s.length() && us.find(s[right]) == us.end()) {
                us.insert(s[right]);
                right++;             
            }
            ls = max(ls, right - left);
            us.erase(s[left]);
            left++;
        }
        return ls;
    }
};

// Sliding Window Approach with HashMap - Faster
class Solution {
    public:
    int lengthOfLongestSubstring(string s) {
        int ls = 0, left = 0, right = 0;
        unordered_map<char, int> um;
        while (right < s.length()) {
            if (um.find(s[right]) != um.end()) {
                left = max(left, um[s[right]] + 1);
            }
            um[s[right]] = right;
            ls = max(ls, right - left + 1);
            right++;
        }
        return ls;
    }
};