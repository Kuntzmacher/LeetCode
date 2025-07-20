struct Solution {}

impl Solution {
    pub fn find_non_min_or_max(nums: Vec<i32>) -> i32 {
        let mut min = -1;
        let mut max = -1;
        let mut temp = -1;

        for num in nums {
            if min == -1 {
                min = num;
                continue;
            }

            if max == -1 && num > min {
                max = num;
                continue;
            } else if max == -1 && num < min {
                max = min;
                min = num;
                continue;
            }

            if num < min {
                temp = min;
                break;
            }

            if num > max {
                temp = max;
                break;
            }

            if num > min && num < max {
                temp = num;
                break;
            }
        }

        temp
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
        let nums = vec![3, 2, 1, 4];
        assert_eq!(Solution::find_non_min_or_max(nums), 2);
    }

    #[test]
    fn test2() {
        let nums = vec![1, 2];
        assert_eq!(Solution::find_non_min_or_max(nums), -1);
    }

    #[test]
    fn test3() {
        let nums = vec![2, 1, 3];
        assert_eq!(Solution::find_non_min_or_max(nums), 2);
    }

    #[test]
    fn test4() {
        let nums = vec![3, 30, 24];
        assert_eq!(Solution::find_non_min_or_max(nums), 24);
    }
}
