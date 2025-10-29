struct Solution {}

impl Solution {
    pub fn max_depth(s: String) -> i32 {

        let mut count: i32 = 0;
        let mut max: i32 = 0;

        for c in s.chars() {
            if c == '(' {
                count += 1;
            } else if c == ')' {
                count -= 1;
            }

            if count > max { max = count; }
        }

        return max;

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
        let s: String = "(1+(2*3)+((8)/4))+1".to_string();
        assert_eq!(3, Solution::max_depth(s));
    }

    #[test]
    fn test2() {
        let s: String = "(1)+((2))+(((3)))".to_string();
        assert_eq!(3, Solution::max_depth(s));
    }

    #[test]
    fn test3() {
        let s: String = "()(())((()()))".to_string();
        assert_eq!(3, Solution::max_depth(s));
    }

}
