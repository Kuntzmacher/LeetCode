// works

struct Solution {}
impl Solution {
    pub fn valid_mountain_array(arr: Vec<i32>) -> bool {
        let mut prev: i32 = -1;
        let mut up: bool = false;
        let mut down: bool = false;

        if arr.len() < 3 {
            return false;
        }

        for item in arr {
            if down {
                if item < prev {
                    prev = item
                } else {
                    return false;
                }
            } else {
                if item > prev {
                    if prev != -1 {
                        up = true;
                    }
                    prev = item;
                } else if item == prev {
                    return false;
                } else {
                    down = true;
                    prev = item;
                }
            }
        }

        if down && up { true } else { false }
    }
}

fn main() {
    println!("Hello, world!");
    Solution::valid_mountain_array(vec![2, 1]);
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test1() {
        let arr: Vec<i32> = vec![2, 1];
        assert_eq!(Solution::valid_mountain_array(arr), false);
    }

    #[test]
    fn test2() {
        let arr: Vec<i32> = vec![3, 5, 5];
        assert_eq!(Solution::valid_mountain_array(arr), false);
    }

    #[test]
    fn test3() {
        let arr: Vec<i32> = vec![0, 3, 2, 1];
        assert_eq!(Solution::valid_mountain_array(arr), true);
    }

    #[test]
    fn test4() {
        let arr: Vec<i32> = vec![0, 1, 2, 3, 4, 5, 6, 7, 8, 9];
        assert_eq!(Solution::valid_mountain_array(arr), false);
    }

    #[test]
    fn test5() {
        let arr: Vec<i32> = vec![9, 8, 7, 6, 5, 4, 3, 2, 1, 0];
        assert_eq!(Solution::valid_mountain_array(arr), false);
    }

    #[test]
    fn test6() {
        let arr: Vec<i32> = vec![3, 7, 20, 14, 15, 14, 10, 8, 2, 1];
        assert_eq!(Solution::valid_mountain_array(arr), false);
    }
}
