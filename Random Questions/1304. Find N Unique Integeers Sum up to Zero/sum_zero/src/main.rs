struct Solution {}

impl Solution {
    pub fn sum_zero(n: i32) -> Vec<i32> {
        let mut output: Vec<i32> = vec![];
        let mut i: i32 = 0;
        let mut j: i32 = 1;
        while i < n {
            if (n - i) % 2 == 1 {
                output.push(0);
                i += 1;
            } else {
                output.push(j);
                output.push(-j);
                i += 2;
                j += 1;
            }
        }
        output
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
        let n: i32 = 5;
        let output: Vec<i32> = Solution::sum_zero(n);
        let mut sum: i32 = 0;
        for item in output {
            sum += item;
        }
        assert_eq!(0, sum);
    }

    #[test]
    fn test2() {
        let n: i32 = 3;
        let output: Vec<i32> = Solution::sum_zero(n);
        let mut sum: i32 = 0;
        for item in output {
            sum += item;
        }
        assert_eq!(0, sum);
    }

    #[test]
    fn test3() {
        let n: i32 = 1;
        let output: Vec<i32> = Solution::sum_zero(n);
        let mut sum: i32 = 0;
        for item in output {
            sum += item;
        }
        assert_eq!(0, sum);
    }

}
