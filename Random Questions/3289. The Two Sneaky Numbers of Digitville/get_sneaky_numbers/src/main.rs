use std::collections::HashMap;

struct Solution {}

impl Solution {
    pub fn get_sneaky_numbers(nums: Vec<i32>) -> Vec<i32> {
        let mut hashmap: HashMap<i32, bool> = HashMap::new();
        let mut out: Vec<i32> = vec![];

        for num in nums {
            if !hashmap.get(&num).unwrap_or(&false) {
                hashmap.insert(num, true);
            } else {
                out.push(num);
                if out.len() == 2 {
                    break;
                }
            }
        }

        out
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
        let nums: Vec<i32> = vec![0, 1, 1, 0];
        let answer: Vec<i32> = vec![1, 0];
        assert_eq!(answer, Solution::get_sneaky_numbers(nums));
    }

    #[test]
    fn test2() {
        let nums: Vec<i32> = vec![0, 3, 2, 1, 3, 2];
        let answer: Vec<i32> = vec![3, 2];
        assert_eq!(answer, Solution::get_sneaky_numbers(nums));
    }

    #[test]
    fn test3() {
        let nums: Vec<i32> = vec![7, 1, 5, 4, 3, 4, 6, 0, 9, 5, 8, 2];
        let answer: Vec<i32> = vec![4, 5];
        assert_eq!(answer, Solution::get_sneaky_numbers(nums));
    }
}
