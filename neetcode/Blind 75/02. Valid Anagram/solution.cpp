// Using Hashmap
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map<char, int> map;
        for (auto i: s) {
            map[i]++;
        }
        for (auto i: t) {
            map[i]--;
            if (map[i] == 0) map.erase(i);
        }
        if (map.empty()) return true;
        return false;
    }
};

// Using Vector
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        vector<int> v(26, 0);
        for (int i = 0; i < s.length(); i++) {
            v[s[i] - 'a']++;
            v[t[i] - 'a']--;
        }
        for (auto i: v) {
            if (i != 0) return false;
        }
        return true;
    }
};
