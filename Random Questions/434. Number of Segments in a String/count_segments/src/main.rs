struct Solution {}
impl Solution {
    pub fn count_segments(s: String) -> i32 {
        let mut count: i32 = 0;
        let mut prev: char = ' ';

        if s.is_empty() {
            return 0;
        }

        for char in s.chars() {
            if (char != ' ') && (prev == ' ') {
                count += 1;
            }
            prev = char;
        }

        count
    }
}

fn main() {
    let s: String = "Hello, my name is John".to_string();
    Solution::count_segments(s);
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test1() {
        let s: String = "Hello, my name is John".to_string();
        assert_eq!(5, Solution::count_segments(s));
    }

    #[test]
    fn test2() {
        let s: String = "Hello".to_string();
        assert_eq!(1, Solution::count_segments(s));
    }

    #[test]
    fn test3() {
        let s: String = "                ".to_string();
        assert_eq!(0, Solution::count_segments(s));
    }

    #[test]
    fn test4() {
        let s: String = "Of all the gin joints in all the towns in all the world,   ".to_string();
        assert_eq!(13, Solution::count_segments(s));
    }

    #[test]
    fn test5() {
        let s: String = "    foo    bar".to_string();
        assert_eq!(2, Solution::count_segments(s));
    }
}
