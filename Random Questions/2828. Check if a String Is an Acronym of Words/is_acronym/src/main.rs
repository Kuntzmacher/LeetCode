#[derive(Debug)]
struct Solution {}

impl Solution {
    pub fn is_acronym(words: Vec<String>, s: String) -> bool {
        if words.len() != s.len() {
            return false;
        }

        let mut acr: String = String::new();

        for word in words.iter() {
            acr.push_str(&word.chars().nth(0).unwrap().to_string());
        }

        acr == s
    }
}

fn main() {
    let words: Vec<String> = vec![
        "alice".to_string(),
        "bob".to_string(),
        "charlie".to_string(),
    ];
    let s: String = "abc".to_string();
    assert_eq!(Solution::is_acronym(words, s), true);
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test1() {
        let words: Vec<String> = vec![
            "alice".to_string(),
            "bob".to_string(),
            "charlie".to_string(),
        ];
        let s: String = "abc".to_string();
        assert_eq!(Solution::is_acronym(words, s), true);
    }

    #[test]
    fn test2() {
        let words: Vec<String> = vec!["an".to_string(), "apple".to_string()];
        let s: String = "a".to_string();
        assert_eq!(Solution::is_acronym(words, s), false);
    }

    #[test]
    fn test3() {
        let words: Vec<String> = vec![
            "never".to_string(),
            "gonna".to_string(),
            "give".to_string(),
            "you".to_string(),
            "up".to_string(),
        ];
        let s: String = "nggyu".to_string();
        assert_eq!(Solution::is_acronym(words, s), true);
    }
}
