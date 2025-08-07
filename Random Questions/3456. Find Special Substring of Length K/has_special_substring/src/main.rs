struct Solution {}

impl Solution {
    pub fn has_special_substring(s: String, k: i32) -> bool {
        let mut prev: char = '0';
        let mut count: i32 = 0;
        let mut reached_k: bool = false;

        for letter in s.chars() {
            if reached_k {
                if prev == letter {
                    reached_k = false;
                    count = 0;
                    continue;
                } else {
                    return true;
                }
            }

            if prev == '0' {
                count += 1;
            } else if prev == letter {
                count += 1;
            } else {
                count = 1;
            }

            if count == k {
                reached_k = true;
                prev = letter;
                continue;
            }

            prev = letter;
        }

        if reached_k { true } else { false }
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
        let s: String = "aaabaaa".to_string();
        let k: i32 = 3;
        assert_eq!(Solution::has_special_substring(s, k), true);
    }

    #[test]
    fn test2() {
        let s: String = "abc".to_string();
        let k: i32 = 2;
        assert_eq!(Solution::has_special_substring(s, k), false);
    }

    #[test]
    fn test3() {
        let s: String = "h".to_string();
        let k: i32 = 1;
        assert_eq!(Solution::has_special_substring(s, k), true);
    }

    #[test]
    fn test4() {
        let s: String = "jkjhfgg".to_string();
        let k: i32 = 2;
        assert_eq!(Solution::has_special_substring(s, k), true);
    }

    #[test]
    fn test5() {
        let s: String = "ii".to_string();
        let k: i32 = 1;
        assert_eq!(Solution::has_special_substring(s, k), false);
    }

    #[test]
    fn test6() {
        let s: String = "dii".to_string();
        let k: i32 = 1;
        assert_eq!(Solution::has_special_substring(s, k), true);
    }
}
