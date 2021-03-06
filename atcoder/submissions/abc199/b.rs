use std::cmp::*;
use proconio::input;
use proconio::marker::Chars;

fn main() {
  input! {
    n: usize,
    av: [usize; n],
    bv: [usize; n],
  }
  let mut res = 0;
  for x in 1..=1000 {
    // 0,nの間で
    let ok = (0..n).all(|i| x >= av[i] && x <= bv[i]);
    if ok { res += 1;}
  }
  println!("{}", res);
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

fn read_tuple<T1: std::str::FromStr, T2: std::str::FromStr>() -> (T1, T2) {
  let mut buf = String::new();
  std::io::stdin().read_line(&mut buf).ok();
  let mut it = buf.trim().split_whitespace();
  let x = it.next().unwrap().parse::<T1>().ok().unwrap();
  let y = it.next().unwrap().parse::<T2>().ok().unwrap();
  (x, y)
}

fn reads_tuple<T1: std::str::FromStr, T2: std::str::FromStr, T3: std::str::FromStr>() -> (T1, T2, T3) {
  let mut buf = String::new();
  std::io::stdin().read_line(&mut buf).ok();
  let mut it = buf.trim().split_whitespace();
  let x = it.next().unwrap().parse::<T1>().ok().unwrap();
  let y = it.next().unwrap().parse::<T2>().ok().unwrap();
  let z = it.next().unwrap().parse::<T3>().ok().unwrap();
  (x, y, z)
}
