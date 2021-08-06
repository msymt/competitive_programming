use std::cmp::*;
use proconio::input;
use proconio::marker::Chars;

fn main() {
    let (a,b,c):(i32,i32,i32) = read_tuple();
    let mut vec: Vec<i32> = Vec::new();
    vec.push(a);
    vec.push(b);
    vec.push(c);
    vec.sort();
    println!("{}", vec[1] + vec[2]);
}

  fn read_tuple<T1: std::str::FromStr, T2: std::str::FromStr, T3: std::str::FromStr>() -> (T1, T2, T3) {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).ok();
    let mut it = buf.trim().split_whitespace();
    let x = it.next().unwrap().parse::<T1>().ok().unwrap();
    let y = it.next().unwrap().parse::<T2>().ok().unwrap();
    let z = it.next().unwrap().parse::<T3>().ok().unwrap();
    (x, y, z)
  }
