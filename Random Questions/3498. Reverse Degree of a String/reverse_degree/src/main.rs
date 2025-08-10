struct Solution {}

impl Solution {
    pub fn reverse_degree(s: String) -> i32 {
        let mut sum: i32 = 0;

        for (i, c) in s.chars().enumerate() {
            sum += (('a' as i32 - c as i32) + 26) * (i as i32 + 1);
        }

        sum
    }
}

fn main() {
    println!("Hello, world!");
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test1() {
        let s = "abc".to_string();
        assert_eq!(148, Solution::reverse_degree(s));
    }

    #[test]
    fn test2() {
        let s = "zaza".to_string();
        assert_eq!(160, Solution::reverse_degree(s));
    }
}
