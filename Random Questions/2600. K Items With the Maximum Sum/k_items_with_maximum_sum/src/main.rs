struct Solution {}

impl Solution {
    pub fn k_items_with_maximum_sum(
        num_ones: i32,
        num_zeros: i32,
        num_neg_ones: i32,
        k: i32,
    ) -> i32 {
        if k <= num_ones {
            return k;
        } else if (k > num_ones) && (k <= num_ones + num_zeros) {
            return num_ones;
        } else if (k > num_ones + num_zeros) && (k <= num_ones + num_zeros + num_neg_ones) {
            return num_ones - (k - (num_ones + num_zeros));
        } else {
            return num_ones - num_neg_ones;
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
        assert_eq!(2, Solution::k_items_with_maximum_sum(3, 2, 0, 2));
    }

    #[test]
    fn test2() {
        assert_eq!(3, Solution::k_items_with_maximum_sum(3, 2, 0, 4));
    }

    #[test]
    fn test3() {
        assert_eq!(1, Solution::k_items_with_maximum_sum(1,1,2,2));
    }


}
