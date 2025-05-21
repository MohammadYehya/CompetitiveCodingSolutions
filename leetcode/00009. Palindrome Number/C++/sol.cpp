// Integer Reversing Technique
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        long rev = 0;
        long num = x;
        while(num > 0)
        {
            rev = rev*10 + num % 10;
            num=num/10;
        }
        if (rev == x) return true;
        return false;
    }
};