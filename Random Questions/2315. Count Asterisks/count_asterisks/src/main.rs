struct Solution {}

impl Solution {
    pub fn count_asterisks(s: String) -> i32 {
        let mut is_counting: bool = true;
        let mut count: i32 = 0;

        for c in s.chars() {
            if c == '|' {
                is_counting = !is_counting;
            } else if is_counting && (c == '*') {
                count += 1;
            }
        }

        count
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
        let s: String = "l|*e*et|c**o|*de|".to_string();
        assert_eq!(2, Solution::count_asterisks(s));
    }

    #[test]
    fn test2() {
        let s: String = "iamprogrammer".to_string();
        assert_eq!(0, Solution::count_asterisks(s));
    }

    #[test]
    fn test3() {
        let s: String = "yo|uar|e**|b|e***au|tifu|l".to_string();
        assert_eq!(5, Solution::count_asterisks(s));
    }
}
