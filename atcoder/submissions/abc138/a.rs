use proconio::input;
fn main() {
    input!{
        a: i32,
        s: String,
    }
    if a >= 3200 {
        println!("{}", s);
    } else {
        println!("red");
    }

}
