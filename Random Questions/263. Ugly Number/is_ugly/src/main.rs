// works :)

impl Solution {
    pub fn is_ugly(n: i32) -> bool {
        if n == 0 {
            return false;
        } else if n == 1 {
            return true;
        } else if n % 2 == 0 {
            return Self::is_ugly(n / 2);
        } else if n % 3 == 0 {
            return Self::is_ugly(n / 3);
        } else if n % 5 == 0 {
            return Self::is_ugly(n / 5);
        } else {
            return false;
        }
    }
}

struct Solution {}

fn main() {
    println!("Hello, world!");
    Solution::is_ugly(6);
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test6() {
        assert_eq!(Solution::is_ugly(6), true);
    }

    #[test]
    fn test1() {
        assert_eq!(Solution::is_ugly(1), true);
    }

    #[test]
    fn test14() {
        assert_eq!(Solution::is_ugly(14), false);
    }

    #[test]
    fn test8() {
        assert_eq!(Solution::is_ugly(8), true);
    }
}
