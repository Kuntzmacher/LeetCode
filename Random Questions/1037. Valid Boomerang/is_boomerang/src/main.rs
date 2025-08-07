struct Solution {}

impl Solution {
    pub fn is_boomerang(points: Vec<Vec<i32>>) -> bool {
        if ((points[0][0] == points[1][0]) && (points[0][1] == points[1][1]))
            || ((points[0][0] == points[2][0]) && (points[0][1] == points[2][1]))
            || ((points[1][0] == points[2][0]) && (points[1][1] == points[2][1]))
        {
            return false;
        }

        let vert01 = points[1][0] - points[0][0] == 0;
        let vert12 = points[2][0] - points[1][0] == 0;

        if vert01 && vert12 {
            return false;
        } else if (vert01 && !vert12) || (!vert01 && vert12) {
            return true;
        }

        let slope01: f32 = (points[1][1] as f32 - points[0][1] as f32)
            / (points[1][0] as f32 - points[0][0] as f32);
        let height01: f32 = points[0][1] as f32 - slope01 * points[0][0] as f32;
        let slope12: f32 = (points[2][1] as f32 - points[1][1] as f32)
            / (points[2][0] as f32 - points[1][0] as f32);
        let height12: f32 = points[1][1] as f32 - slope12 * points[1][0] as f32;

        if ((slope01 - slope12).abs() < 1e-5) && ((height01 - height12).abs() < 1e-5) {
            return false;
        }

        return true;
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
        let points: Vec<Vec<i32>> = vec![vec![1, 1], vec![2, 3], vec![3, 2]];
        assert_eq!(true, Solution::is_boomerang(points));
    }

    #[test]
    fn test2() {
        let points: Vec<Vec<i32>> = vec![vec![1, 1], vec![2, 2], vec![3, 3]];
        assert_eq!(false, Solution::is_boomerang(points));
    }

    #[test]
    fn test3() {
        let points: Vec<Vec<i32>> = vec![vec![0, 0], vec![0, 2], vec![2, 1]];
        assert_eq!(true, Solution::is_boomerang(points));
    }

    #[test]
    fn test4() {
        let points: Vec<Vec<i32>> = vec![vec![0, 1], vec![2, 1], vec![0, 0]];
        assert_eq!(true, Solution::is_boomerang(points));
    }

    #[test]
    fn test5() {
        let points: Vec<Vec<i32>> = vec![vec![75, 76], vec![19, 4], vec![40, 31]];
        assert_eq!(false, Solution::is_boomerang(points));
    }
}
