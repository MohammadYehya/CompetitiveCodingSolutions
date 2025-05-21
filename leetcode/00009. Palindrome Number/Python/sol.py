# C-Like Solution
class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if (x < 0):
            return False
        else:
            num = x
            rev = 0
            while (num > 0):
                rev = rev*10 + num%10
                num = num/10
            if rev == x:
                return True
            return False
        

# Python String Solution
class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        return str(x)==str(x)[::-1]