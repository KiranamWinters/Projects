use std::mem;
fn main() {
    let numbers : i16 = 43;
    let number : i32 = 255;

    println!("{} , {}", mem::size_of_val(&number), number);
    println!("Hello, world!");
}
