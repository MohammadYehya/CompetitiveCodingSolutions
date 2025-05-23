// Hashmap Solution
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> map = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int num = 0;
        for (int i = 0; i < s.length()-1; i++)
        {
            int now = map[s[i]];
            int then = map[s[i+1]];
            num += now >= then ? now : -now;
        }
        return num+map[s[s.length()-1]];
    }
};