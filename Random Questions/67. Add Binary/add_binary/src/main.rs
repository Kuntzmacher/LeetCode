// working

impl Solution {
    pub fn add_binary(a: String, b: String) -> String {
        let mut sum: String = "".to_string();

        let mut a_clone = a.clone();
        let mut b_clone = b.clone();

        let a_len = a.len();
        let b_len = b.len();

        let mut len = 0;

        if a_len > b_len {
            len = a_len;
        } else {
            len = b_len;
        }

        let mut a_char: Option<char>;
        let mut b_char: Option<char>;
        let mut rem: Option<char> = Some('0');
        let mut i: usize = 0;

        while i <= len {
            if a_clone.is_empty() && b_clone.is_empty() {
                break;
            } else if a_clone.is_empty() && !b_clone.is_empty() {
                a_char = Some('0');
                b_char = b_clone.pop();
            } else if !a_clone.is_empty() && b_clone.is_empty() {
                a_char = a_clone.pop();
                b_char = Some('0');
            } else {
                a_char = a_clone.pop();
                b_char = b_clone.pop();
            }

            if a_char == Some('0') && b_char == Some('0') && rem == Some('0') {
                sum.push('0');
                rem = Some('0');
            } else if a_char == Some('0') && b_char == Some('0') && rem == Some('1') {
                sum.push('1');
                rem = Some('0');
            } else if ((a_char == Some('1') && b_char == Some('0'))
                || (a_char == Some('0') && b_char == Some('1')))
                && rem == Some('0')
            {
                sum.push('1');
                rem = Some('0');
            } else if ((a_char == Some('1') && b_char == Some('0'))
                || (a_char == Some('0') && b_char == Some('1')))
                && rem == Some('1')
            {
                sum.push('0');
                rem = Some('1');
            } else if a_char == Some('1') && b_char == Some('1') && rem == Some('0') {
                sum.push('0');
                rem = Some('1');
            } else if a_char == Some('1') && b_char == Some('1') && rem == Some('1') {
                sum.push('1');
                rem = Some('1');
            }

            i += 1;
        }

        if rem == Some('1') {
            sum.push('1');
        }

        sum.chars().rev().collect()
    }
}

struct Solution {}

fn main() {
    let _ = Solution {};
    let a = "11".to_string();
    let b = "1".to_string();
    Solution::add_binary(a, b);
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test1() {
        let a = "11".to_string();
        let b = "1".to_string();
        assert_eq!(Solution::add_binary(a, b), "100");
    }

    #[test]
    fn test2() {
        let a = "1010".to_string();
        let b = "1011".to_string();
        assert_eq!(Solution::add_binary(a, b), "10101");
    }
}
