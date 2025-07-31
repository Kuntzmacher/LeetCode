struct Solution {}

impl Solution {
    pub fn final_string(s: String) -> String {
        let mut out: String = String::new();
        let mut temp: String = String::new();
        let mut streak: i32 = 0;

        for letter in s.chars() {
            if letter != 'i' {
                if (streak > 0) && (streak % 2 != 0) {
                    out.push_str(&temp);
                    out = out.chars().rev().collect();
                    temp = String::new();
                }
                temp.push(letter);
                streak = 0;
            } else {
                streak += 1;
            }
        }

        if !temp.is_empty() {
            if (streak == 0) || ((streak > 0) && (streak % 2 == 0)) {
                out.push_str(&temp);
            } else if (streak > 0) && (streak % 2 != 0) {
                out.push_str(&temp);
                out = out.chars().rev().collect();
            }
        }

        out
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
        let s = "string".to_string();
        let out = "rtsng".to_string();
        assert_eq!(Solution::final_string(s), out);
    }

    #[test]
    fn test2() {
        let s = "poiinter".to_string();
        let out = "ponter".to_string();
        assert_eq!(Solution::final_string(s), out);
    }

    #[test]
    fn test3() {
        let s = "goci".to_string();
        let out = "cog".to_string();
        assert_eq!(Solution::final_string(s), out);
    }

    #[test]
    fn test4() {
        let s = "viwif".to_string();
        let out = "wvf".to_string();
        assert_eq!(Solution::final_string(s), out);
    }
}
