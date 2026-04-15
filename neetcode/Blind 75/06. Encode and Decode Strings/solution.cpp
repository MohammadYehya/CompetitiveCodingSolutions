class Solution {
public:
    char delimiter = '|';
    string encode(vector<string>& strs) {
        string str = "";
        for (auto s: strs) {str += to_string(s.size()) + delimiter + s;}
        return str;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        int n = 0;
        for (int i = 0; i< s.size(); i++){
            if (s[i] == delimiter) {
                int length = stoi(s.substr(n, i - n));
                strs.push_back(s.substr(i+1, length));
                i += length;
                n = i+1;
            }
        }
        return strs;
    }
};
