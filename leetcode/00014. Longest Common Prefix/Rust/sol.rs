impl Solution {
    pub fn longest_common_prefix(mut strs: Vec<String>) -> String {
        let mut prefix = strs[0].clone();
        for s in strs.iter().skip(1) {
            while !s.starts_with(&prefix) {
                prefix.pop();
                if prefix.is_empty() {
                    return String::new();
                }
            }
        }
        return prefix;
    }
}