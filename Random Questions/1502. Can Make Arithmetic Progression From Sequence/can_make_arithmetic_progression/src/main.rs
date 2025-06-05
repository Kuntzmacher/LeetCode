// works

struct Solution {}

impl Solution {
    pub fn can_make_arithmetic_progression(arr: Vec<i32>) -> bool {
        let mut arr2 = arr.clone();
        arr2.sort();
        let diff = arr2[1] - arr2[0];

        for i in 1..arr2.len() {
            if arr2[i] - arr2[i - 1] != diff {
                return false;
            }
        }

        true
    }
}

fn main() {
    let arr: Vec<i32> = vec![3, 5, 1];
    Solution::can_make_arithmetic_progression(arr);
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test1() {
        let arr: Vec<i32> = vec![3, 5, 1];
        assert_eq!(Solution::can_make_arithmetic_progression(arr), true);
    }

    #[test]
    fn test2() {
        let arr: Vec<i32> = vec![1, 2, 4];
        assert_eq!(Solution::can_make_arithmetic_progression(arr), false);
    }
}
