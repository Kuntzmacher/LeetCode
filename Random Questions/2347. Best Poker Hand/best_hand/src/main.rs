use std::collections::HashMap;

struct Solution {}

impl Solution {
    pub fn best_hand(ranks: Vec<i32>, suits: Vec<char>) -> String {
        let mut prev: char = suits[0];
        for c in suits {
            if c != prev {
                prev = 'X';
                break;
            }
        }

        if prev != 'X' {
            return "Flush".to_string();
        }

        let mut map: HashMap<i32, i32> = HashMap::new();

        let mut temp: i32;
        for num in ranks {
            if map.contains_key(&num) {
                temp = map.get(&num).unwrap() + 1;
                map.insert(num, temp);
            } else {
                map.insert(num, 1);
            }
        }

        let mut max: i32 = 0;
        for item in map {
            if max < item.1 {
                max = item.1;
            }
        }

        if max == 1 {
            return "High Card".to_string();
        } else if max == 2 {
            return "Pair".to_string();
        } else {
            return "Three of a Kind".to_string();
        }
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
        let ranks: Vec<i32> = vec![13, 2, 3, 1, 9];
        let suits: Vec<char> = vec!['a', 'a', 'a', 'a', 'a'];
        let output: String = "Flush".to_string();
        assert_eq!(output, Solution::best_hand(ranks, suits));
    }

    #[test]
    fn test2() {
        let ranks: Vec<i32> = vec![4, 4, 2, 4, 4];
        let suits: Vec<char> = vec!['d', 'a', 'a', 'b', 'c'];
        let output: String = "Three of a Kind".to_string();
        assert_eq!(output, Solution::best_hand(ranks, suits));
    }

    #[test]
    fn test3() {
        let ranks: Vec<i32> = vec![10, 10, 2, 12, 9];
        let suits: Vec<char> = vec!['a', 'b', 'c', 'a', 'd'];
        let output: String = "Pair".to_string();
        assert_eq!(output, Solution::best_hand(ranks, suits));
    }
}
