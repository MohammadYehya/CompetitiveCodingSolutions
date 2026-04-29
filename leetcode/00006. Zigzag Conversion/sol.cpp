// Mathematical Solution
class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> vec(numRows, "");
        int jump = max(2 * numRows - 2, 1) ;
        for (int j = 0; j < s.size(); j++) {
            int row = j % jump;
            if (row >= numRows) row = jump - row;
            vec[row] += s[j];
        }
        string res = "";
        for (const auto& i: vec) res += i;
        return res;
    }
};

//Directional Solution
class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
        vector<string> vec(numRows);
        int row = 0, dir = 1;
        for (char c : s) {
            vec[row] += c;
            if (row == 0) dir = 1;
            else if (row == numRows - 1) dir = -1;
            row += dir;
        }
        string res;
        for (auto& str : vec) res += str;
        return res;
    }
};



// P Y A
// A P L

// P   A   H   N
// A P L S I I G
// Y   I   R

// P     I     N
// A   L S   I G
// Y A   H R
// P     I

// P       H
// A     S I
// Y   I   R
// P L     I G
// A       N

// 2 x numRows - 2