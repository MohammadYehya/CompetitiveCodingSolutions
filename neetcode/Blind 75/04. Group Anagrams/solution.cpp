class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        for (auto s: strs) {
            vector<int> count(26, 0);
            for (auto c: s) count[c - 'a']++;
            string key = "";
            for (int i = 0; i < 26; ++i) {
                key += to_string(count[i]) + "#";
            }
            map[key].push_back(s);
        }
        vector<vector<string>> res;
        for (auto& i: map) res.push_back(i.second);
        return res;
    }
};