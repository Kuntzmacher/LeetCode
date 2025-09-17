struct Solution {}

impl Solution {
    /* pub fn num_of_strings(patterns: Vec<String>, word: String) -> i32 {
        let mut count: i32 = 0;
        let mut done: Vec<bool> = vec![false; patterns.len()];

        for (i, char) in word.chars().enumerate() {
            for (k, pattern) in patterns.iter().enumerate() {
                if Some(char) == pattern.chars().nth(0) {
                    if done[k] == true {
                        break;
                    }
                    for j in 0..pattern.len() {
                        if pattern.chars().nth(j) == word.chars().nth(i + j) {
                            continue;
                        } else {
                            break;
                        }
                    }
                    count += 1;
                    done[k] = true;
                }
            }
        }

        return count;
    } */
    pub fn num_of_strings(patterns: Vec<String>, word: String) -> i32 {
        patterns
            .iter()
            .filter(|pattern| word.contains(pattern.as_str()))
            .count() as i32
    }
}

fn main() {
    println!("Hello, world!");
}

#[test]
fn test1() {
    let patterns: Vec<String> = vec![
        "a".to_string(),
        "abc".to_string(),
        "bc".to_string(),
        "d".to_string(),
    ];
    let word: String = "abc".to_string();
    assert_eq!(Solution::num_of_strings(patterns, word), 3);
}

#[test]
fn test2() {
    let patterns: Vec<String> = vec!["a".to_string(), "b".to_string(), "c".to_string()];
    let word: String = "aaaaabbbbb".to_string();
    assert_eq!(Solution::num_of_strings(patterns, word), 2);
}

#[test]
fn test3() {
    let patterns: Vec<String> = vec!["a".to_string(), "a".to_string(), "a".to_string()];
    let word: String = "ab".to_string();
    assert_eq!(Solution::num_of_strings(patterns, word), 3);
}

#[test]
fn test4() {
    let patterns: Vec<String> = vec![
        "glgpqusg".to_string(),
        "qsyrgdelg".to_string(),
        "akcsg".to_string(),
        "e".to_string(),
        "fnmi".to_string(),
        "gzqsyrgdelg".to_string(),
        "lapwypxrmaydjr".to_string(),
        "s".to_string(),
        "iwig".to_string(),
    ];
    let word: String = "numiwigzqsyrgdelgxs".to_string();
    assert_eq!(Solution::num_of_strings(patterns, word), 5);
}
