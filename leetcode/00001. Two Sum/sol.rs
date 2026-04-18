// Bruteforce Solution
impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        for i in 0..nums.len() {
            for j in i+1..nums.len() {
                if nums[i] + nums[j] == target {
                    return vec![i as i32, j as i32];
                }
            }
        }
        vec![]
    }
}

// Two Pointer Approach
impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut nums_i: Vec<(i32, i32)> = nums.iter().copied().enumerate().map(|(i, num)| (num, i.try_into().unwrap_or(0))).collect();
        nums_i.sort_by_key(|&(value, _)| value);
        let mut left = 0;
        let mut right = nums_i.len()-1;
        while left < right{
            let value = nums_i[left].0 + nums_i[right].0;
            if value == target{
                return vec![nums_i[left].1, nums_i[right].1];
            } 
            if value > target {
                right -= 1;
            }
            else {
                left += 1
            }
        }
        vec![0,0]
    }
}

// Hashmap Solution
use std::collections::HashMap;
impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut hashmap = HashMap::new();
        for (i, &n) in nums.iter().enumerate() {
            let valy = target - n;
            if hashmap.contains_key(&valy) {
                return vec![*hashmap.get(&valy).unwrap() as i32, i as i32];
            }
            hashmap.insert(n, i);
        }
        vec![]
    }
}