# Sliding Window Approach using Set
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        st = set()
        l = r = ls = 0
        while(l < len(s)):
            while(r < len(s) and s[r] not in st):
                st.add(s[r])
                r+=1
            ls = max(ls, r-l)
            st.remove(s[l])
            l+=1
        return ls
    
# Sliding Window Approach using Dictionary - Faster
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if not s:
            return 0
        max_length = 0
        left = 0
        char_index = {}
        for right, char in enumerate(s):
            if char in char_index and char_index[char] >= left:
                left = char_index[char] + 1
            if max_length < right - left + 1:
                max_length = right - left + 1
            char_index[char] = right
        return max_length