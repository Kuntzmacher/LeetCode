struct Solution {}

impl Solution {
    pub fn largest_integer(num: i32) -> i32 {
        let mut out: Vec<i32> = Vec::new();
        let mut digits: Vec<i32> = Vec::new();
        let mut evens: Vec<i32> = Vec::new();
        let mut odds: Vec<i32> = Vec::new();
        let mut num_clone = num;

        while num_clone > 0 {
            digits.push(num_clone % 10);
            num_clone /= 10;
        }
        digits.reverse();

        for digit in &digits {
            if digit % 2 == 0 {
                evens.push(*digit);
            } else {
                odds.push(*digit);
            }
        }

        evens.sort();
        odds.sort();

        for digit in &digits {
            if *digit % 2 == 0 {
                out.push(evens.pop().expect("even number"));
            } else {
                out.push(odds.pop().expect("odd number"));
            }
        }

        out.iter().fold(0, |acc, &d| acc * 10 + d)
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
        assert_eq!(3412, Solution::largest_integer(1234));
    }

    #[test]
    fn test2() {
        assert_eq!(87655, Solution::largest_integer(65875));
    }
}
