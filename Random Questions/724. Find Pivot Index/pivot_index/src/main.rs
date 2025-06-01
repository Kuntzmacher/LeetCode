// works
use std::ops::Range;

impl Solution {
    pub fn pivot_index(nums: Vec<i32>) -> i32 {
        let mut i: usize = 0;
        let mut j: usize = 0;
        let mut lsum = 0;
        let mut rsum = 0;

        for i in 0..nums.len() {
            j = 0;
            lsum = 0;
            rsum = 0;
            for j in 0..i {
                lsum += nums[j];
            }
            j = i + 1;
            for j in i + 1..nums.len() {
                rsum += nums[j];
            }
            if lsum == rsum {
                return i.try_into().unwrap();
            }
        }

        return -1;
    }
}

struct Solution {}

fn main() {
    println!("Hello, world!");
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test1() {
        let vector: Vec<i32> = vec![1, 7, 3, 6, 5, 6];
        assert_eq!(Solution::pivot_index(vector), 3);
    }

    #[test]
    fn test2() {
        let vector: Vec<i32> = vec![1, 2, 3];
        assert_eq!(Solution::pivot_index(vector), -1);
    }

    #[test]
    fn test3() {
        let vector: Vec<i32> = vec![2, 1, -1];
        assert_eq!(Solution::pivot_index(vector), 0);
    }
}
