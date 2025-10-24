class Solution:
    def isValid(self, s: str) -> bool:
        st = []
        match = {')': '(', ']': '[', '}': '{'}
        for c in s:
            if c in "([{":
                st.append(c)
            elif not st or st[-1] != match[c]:
                return False
            else: 
                st.pop()
        return not st