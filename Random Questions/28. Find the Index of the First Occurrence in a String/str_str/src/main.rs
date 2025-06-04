// works
impl Solution {
    pub fn str_str(haystack: String, needle: String) -> i32 {
        if needle.is_empty() {
            return 0;
        }

        let hlen = haystack.len();
        let nlen = needle.len();

        if nlen > hlen {
            return -1;
        }

        for i in 0..=hlen - nlen {
            if &haystack[i..i + nlen] == needle {
                return i as i32;
            }
        }
        -1
    }
}

struct Solution {}

fn main() {
    println!("Hello, world!");
    let haystack: String = String::from("sadbutsad");
    let needle: String = String::from("sad");
    Solution::str_str(haystack, needle);
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test1() {
        let haystack: String = String::from("sadbutsad");
        let needle: String = String::from("sad");
        assert_eq!(Solution::str_str(haystack, needle), 0);
    }

    #[test]
    fn test2() {
        let haystack: String = String::from("leetcode");
        let needle: String = String::from("leeto");
        assert_eq!(Solution::str_str(haystack, needle), -1);
    }
}
