struct Solution {}

impl Solution {
    pub fn max_score(s: String) -> i32 {
        let mut ones: i32 = 0;
        let mut zeros: i32 = 0;
        let mut max: i32 = 0;

        for bit in s.chars().rev() {
            if bit == '1' {
                ones += 1;
            }
        }

        if (ones == s.len() as i32) || (ones == 0) {
            max = s.len() as i32 - 1;
            return max;
        }

        for (i, bit) in s.chars().enumerate() {
            if i == s.len() - 1 {
                break;
            }

            if bit == '0' {
                zeros += 1;
            } else if bit == '1' {
                ones -= 1;
            }

            if ones + zeros > max {
                max = ones + zeros;
            }
        }

        max
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
        let s: String = "011101".to_string();
        let answer: i32 = 5;
        assert_eq!(answer, Solution::max_score(s));
    }

    #[test]
    fn test2() {
        let s: String = "00111".to_string();
        let answer: i32 = 5;
        assert_eq!(answer, Solution::max_score(s));
    }

    #[test]
    fn test3() {
        let s: String = "1111".to_string();
        let answer: i32 = 3;
        assert_eq!(answer, Solution::max_score(s));
    }

    #[test]
    fn test4() {
        let s: String = "00".to_string();
        let answer: i32 = 1;
        assert_eq!(answer, Solution::max_score(s));
    }

    #[test]
    fn test5() {
        let s: String = "0100".to_string();
        let answer: i32 = 2;
        assert_eq!(answer, Solution::max_score(s));
    }

}
