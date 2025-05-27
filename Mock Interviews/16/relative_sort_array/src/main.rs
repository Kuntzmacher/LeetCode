// working

impl Solution {
    pub fn relative_sort_array(arr1: Vec<i32>, arr2: Vec<i32>) -> Vec<i32> {
        let mut arr1_sorted = arr1.clone();
        arr1_sorted.sort();

        let mut arr_answer: Vec<i32> = vec![];

        let mut len = arr1.len();
        let mut index = 0;

        for item2 in arr2 {
            while index < len {
                // println!("{:?}", arr1_sorted);
                if item2 == arr1_sorted[index] {
                    arr_answer.push(arr1_sorted.remove(index));
                    len = len - 1;
                } else {
                    index += 1;
                }
            }
            index = 0;
        }

        for item in arr1_sorted {
            arr_answer.push(item);
        }

        arr_answer
    }
}

struct Solution {}

fn main() {
    let arr1 = vec![2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 19];
    let arr2 = vec![2, 1, 4, 3, 9, 6];
    Solution::relative_sort_array(arr1, arr2);
}
#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn first() {
        let arr1 = vec![2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 19];
        let arr2 = vec![2, 1, 4, 3, 9, 6];
        let output = Solution::relative_sort_array(arr1, arr2);
        let answer = vec![2, 2, 2, 1, 4, 3, 3, 9, 6, 7, 19];
        assert_eq!(answer, output);
    }

    #[test]
    fn second() {
        let arr1 = vec![28, 6, 22, 8, 44, 17];
        let arr2 = vec![22, 28, 8, 6];
        let output = Solution::relative_sort_array(arr1, arr2);
        let answer = vec![22, 28, 8, 6, 17, 44];
        assert_eq!(answer, output);
    }
}
