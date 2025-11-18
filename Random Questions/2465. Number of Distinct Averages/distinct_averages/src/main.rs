use std::collections::HashSet;

struct Solution {}

impl Solution {
    pub fn distinct_averages(nums: Vec<i32>) -> i32 {
        let mut numbers: Vec<i32> = nums.clone();
        numbers.sort();

        let mut sums: HashSet<i32> = HashSet::new();

        let mut start: usize = 0;
        let mut end: usize = numbers.len() - 1;

        let mut sum: i32;

        while start < end {
            sum = numbers[end] + numbers[start];
            sums.insert(sum);
            start += 1;
            end -= 1;
        }

        return sums.len() as i32;
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
        let nums: Vec<i32> = vec![4, 1, 4, 0, 3, 5];
        assert_eq!(2, Solution::distinct_averages(nums));
    }

    #[test]
    fn test2() {
        let nums: Vec<i32> = vec![1, 100];
        assert_eq!(1, Solution::distinct_averages(nums));
    }

    #[test]
    fn test3() {
        let nums: Vec<i32> = vec![
            15, 77, 97, 26, 53, 41, 26, 13, 12, 18, 17, 42, 13, 33, 34, 70, 48, 65, 62, 78, 33, 60,
            96, 53, 23, 14, 60, 70, 57, 41, 29, 12, 79, 65, 52, 30,
        ];
        assert_eq!(10, Solution::distinct_averages(nums));
    }
}
