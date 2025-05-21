// Integer Reversing Technique
impl Solution {
    pub fn is_palindrome(x: i32) -> bool {
        if (x < 0) {
            return false;
        }
        let mut num = x;
        let mut rev = 0;
        while (num > 0)
        {
            rev = rev*10 + num%10;
            num = num/10;
        }
        rev == x
    }
}