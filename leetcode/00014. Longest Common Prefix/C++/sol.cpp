// Brute Force Solution
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string out = strs.back();
        strs.pop_back();
        for (auto i:strs){
            int l1 = i.length();
            int l2 = out.length();
            int j = 0;
            string str = "";
            while (j < l1 && j < l2){
                if (out[j] != i[j])
                    break;
                str += out[j];
                j++;
            }
            out = str;
        }
        return out;
    }
};

// Can also use the string.find() and string.prefix() functions to find a prefix
/*
    string prefix = strs[0];
    for (int i=1; i<strs.size(); ++i){
        while( strs[i].find(prefix) != 0){
            prefix = prefix.substr(0, prefix.length() - 1);
            if (prefix.empty()) return "";
        }
    }
    return prefix;
*/