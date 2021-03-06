use std::cmp::*;
use proconio::input;
use proconio::marker::Chars;

fn main() {
    let (a,b):(i32,i32) = reads_tuple();
    if a <= b && b <= 6*a {
      println!("Yes");
    } else {
      println!("No");
    }
}

  fn reads_tuple<T1: std::str::FromStr, T2: std::str::FromStr>() -> (T1, T2) {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).ok();
    let mut it = buf.trim().split_whitespace();
    let x = it.next().unwrap().parse::<T1>().ok().unwrap();
    let y = it.next().unwrap().parse::<T2>().ok().unwrap();
    (x, y)
  }
