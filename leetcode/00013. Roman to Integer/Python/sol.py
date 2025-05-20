# Dictionary Solution
class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        map = {'I':1, 'V':5, 'X':10, 'L':50, 'C':100, 'D': 500, 'M':1000}
        num = 0
        l = len(s)-1
        for i in range(l):
            if map[s[i]] < map[s[i+1]]:
                num += -map[s[i]]
            else:
                num += map[s[i]]
        return num+map[s[-1]]