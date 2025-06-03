// working
impl Solution {
    pub fn max_product(nums: Vec<i32>) -> i32 {
        let mut max1: i32 = 0;
        let mut max2: i32 = 0;

        for num in nums {
            if num >= max1 && num >= max2 {
                max2 = max1;
                max1 = num;
            } else if num < max1 && num >= max2 {
                max2 = num;
            }
        }

        (max1-1) * (max2-1)
    }
}

struct Solution {}

fn main() {
    println!("Hello, world!");
    let nums: Vec<i32> = vec![3, 4, 5, 2];
    assert_eq!(Solution::max_product(nums), 12);
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test1() {
        let nums: Vec<i32> = vec![3, 4, 5, 2];
        assert_eq!(Solution::max_product(nums), 12);
    }

    #[test]
    fn test2() {
        let nums: Vec<i32> = vec![1, 5, 4, 5];
        assert_eq!(Solution::max_product(nums), 16);
    }

    #[test]
    fn test3() {
        let nums: Vec<i32> = vec![3, 7];
        assert_eq!(Solution::max_product(nums), 12);
    }
}
