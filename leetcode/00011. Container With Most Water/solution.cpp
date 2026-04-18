class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int res = 0;
        for (int i = 0, j = n-1; i < j;) {
            int val = min(heights[i], heights[j]) * (j-i);
            res = max(val, res);
            if(heights[i] > heights[j]) j--;
            else i++;
        }
        return res;
    }
};