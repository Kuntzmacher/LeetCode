struct Solution {}

impl Solution {
    pub fn final_value_after_operations(operations: Vec<String>) -> i32 {
        let mut x: i32 = 0;
        let mut slice;
        let mut c: char;

        for item in operations {
            slice = item.replace("X", "");
            c = slice.chars().next().unwrap();
            if c == '+' {
                x += 1;
            } else if c == '-' {
                x -= 1;
            }
        }

        x
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
        let operations: Vec<String> = vec!["--X".to_string(), "X++".to_string(), "X++".to_string()];
        let answer: i32 = 1;
        assert_eq!(answer, Solution::final_value_after_operations(operations));
    }

    #[test]
    fn test2() {
        let operations: Vec<String> = vec!["++X".to_string(), "++X".to_string(), "X++".to_string()];
        let answer: i32 = 3;
        assert_eq!(answer, Solution::final_value_after_operations(operations));
    }

    #[test]
    fn test3() {
        let operations: Vec<String> = vec![
            "X++".to_string(),
            "++X".to_string(),
            "--X".to_string(),
            "X--".to_string(),
        ];
        let answer: i32 = 0;
        assert_eq!(answer, Solution::final_value_after_operations(operations));
    }
}
