struct Solution {}

impl Solution {
    pub fn max_adjacent_distance(nums: Vec<i32>) -> i32 {
        let mut answer: i32 = 0;
        let mut temp: i32;

        for i in 0..nums.len() - 1 {
            temp = nums[i+1] - nums[i];

            if temp < 0 {
                temp *= -1;
            }

            if temp > answer {
                answer = temp;
            }
        }

        temp = nums[0] - nums[nums.len()-1];

        if temp < 0 {
            temp *= -1;
        }

        if temp > answer {
            answer = temp;
        }

        return answer;
    }
}

fn main() {
    println!("Hello, world!");
}

#[test]
fn test1() {
    let nums: Vec<i32> = vec![1, 2, 4];
    let answer: i32 = Solution::max_adjacent_distance(nums);
    assert_eq!(3, answer);
}

#[test]
fn test2() {
    let nums: Vec<i32> = vec![-5, -10, -5];
    let answer: i32 = Solution::max_adjacent_distance(nums);
    assert_eq!(5, answer);
}

#[test]
fn test3() {
    let nums: Vec<i32> = vec![-2, 1, -5];
    let answer: i32 = Solution::max_adjacent_distance(nums);
    assert_eq!(6, answer);
}
