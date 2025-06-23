struct Solution {}
impl Solution {
    pub fn find_closest_number(nums: Vec<i32>) -> i32 {
        let mut min: i32 = -100000;

        for num in nums.iter() {
            if num.abs() == min.abs() {
                if *num > min {
                    min = *num;
                }
            } else if num.abs() < min.abs() {
                min = *num;
            }
        }

        return min;
    }
}

fn main() {
    todo!();
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test1() {
        let nums: Vec<i32> = vec![-4, -2, 1, 4, 8];
        assert_eq!(1, Solution::find_closest_number(nums));
    }

    #[test]
    fn test2() {
        let nums: Vec<i32> = vec![2, -1, 1];
        assert_eq!(1, Solution::find_closest_number(nums));
    }
}
