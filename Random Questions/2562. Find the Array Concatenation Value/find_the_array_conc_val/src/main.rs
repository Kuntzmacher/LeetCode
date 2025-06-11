struct Solution {}
impl Solution {
    pub fn find_the_array_conc_val(nums: Vec<i32>) -> i64 {
        let mut arr: Vec<String> = vec![];
        let mut temp: String;
        let mut numscpy: Vec<i32> = nums.clone();

        while !numscpy.is_empty() {
            if numscpy.len() == 1 {
                temp = numscpy.pop().unwrap().to_string();
                arr.push(temp);
            } else {
                temp = format!(
                    "{big}{small}",
                    small = numscpy.remove(numscpy.len() - 1),
                    big = numscpy.remove(0)
                );
                arr.push(temp);
            }
        }

        let mut sum: i64 = 0;
        let mut num: i64;
        for item in arr {
            num = item.parse().expect("not a valid number");
            sum += num;
        }

        sum
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
        let nums: Vec<i32> = vec![7, 52, 2, 4];
        let answer: i64 = 596;
        assert_eq!(Solution::find_the_array_conc_val(nums), answer);
    }

    #[test]
    fn test2() {
        let nums: Vec<i32> = vec![5, 14, 13, 8, 12];
        let answer: i64 = 673;
        assert_eq!(Solution::find_the_array_conc_val(nums), answer);
    }
}
