# Bruteforce Solution
class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        out = strs.pop()
        for i in strs:
            l1 = len(out)
            l2 = len(i)
            j = 0
            str = ""
            while j < l1 and j < l2:
                if out[j] == i[j]:
                    str += out[j]
                    j+=1
                else:
                    break
            out = str
        return out