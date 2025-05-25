// ╭────────────╮
// │ working ツ │
// ╰────────────╯

use std::io;

impl Solution {
    pub fn fib(n: i32) -> i32 {
        if n == 0 {
            0
        } else if n == 1 {
            1
        } else {
            Solution::fib(n - 1) + Solution::fib(n - 2)
        }
    }
}

struct Solution {
    var: i32,
}

fn main() {
    // let sol = Solution { var: 0 };
    // print!("{}", sol.var);

    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("failed");

    let n: i32 = input.trim().parse().expect("enter an int");

    println!("{}", Solution::fib(n));
}
