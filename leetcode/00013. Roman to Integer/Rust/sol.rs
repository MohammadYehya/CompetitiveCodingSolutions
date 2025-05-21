// Hashmap Solution
use std::collections::HashMap;
impl Solution {
    pub fn roman_to_int(s: String) -> i32 {
        let chars: Vec<char> = s.chars().collect();
        let mut hashmap = HashMap::from([('I',1),('V',5),('X',10),('L',50),('C',100),('D',500),('M',1000)]);
        let mut num = 0;
        for i in 0..chars.len()-1{
            let now = hashmap.get(&chars[i]).unwrap();
            let then = hashmap.get(&chars[i+1]).unwrap();
            if (now < then)
            {
                num-=now;
            }
            else
            {
                num+=now;
            }
        }
        num+= hashmap.get(&chars[chars.len()-1]).unwrap();
        return num;
    }
}

// Simple Match Solution
impl Solution {
pub fn roman_to_int(s: String) -> i32 {
        let mut result = 0;
        let chars: Vec<char> = s.chars().collect();
        let n = chars.len();
        for i in 0..n {
            let value = match chars[i] {
                'I' => 1,
                'V' => 5,
                'X' => 10,
                'L' => 50,
                'C' => 100,
                'D' => 500,
                'M' => 1000,
                _ => 0,
            };
            if i + 1 < n {
                let next = match chars[i + 1] {
                    'I' => 1,
                    'V' => 5,
                    'X' => 10,
                    'L' => 50,
                    'C' => 100,
                    'D' => 500,
                    'M' => 1000,
                    _ => 0,
                };
                if value < next {
                    result -= value;
                } else {
                    result += value;
                }
            } else {
                result += value;
            }
        }
        result
    }
}