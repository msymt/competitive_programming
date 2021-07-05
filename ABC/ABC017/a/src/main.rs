use std::cmp::*;
use proconio::input;
use proconio::marker::Chars;

fn main() {
    // let mut sv: Vec<i32> = Vec::new();
    // let mut ev: Vec<i32> = Vec::new();
    let mut sum: i32 = 0;
    for _ in 0..3 {
        let (si,ei): (i32,i32) = reads_tuple();
        // let si:i32 = read();
        // sv.push(si);
        // let ei:i32 = read();
        // ev.push(ei);
        sum += si * ei / 10;
    }

    println!("{}", sum);
}

fn read<T: std::str::FromStr>() -> T {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).ok();
    buf.trim().parse::<T>().ok().unwrap()
  }

  fn reads<T: std::str::FromStr>(n: usize) -> Vec<T> {
    let mut vec: Vec<T> = vec![];
    for _ in 0 .. n {
      vec.push(read());
    }
    vec
  }

  fn reads_tuple<T1: std::str::FromStr, T2: std::str::FromStr>() -> (T1, T2) {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).ok();
    let mut it = buf.trim().split_whitespace();
    let x = it.next().unwrap().parse::<T1>().ok().unwrap();
    let y = it.next().unwrap().parse::<T2>().ok().unwrap();
    (x, y)
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
