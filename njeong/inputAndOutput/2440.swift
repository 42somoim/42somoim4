import Foundation

//2440 별찍기 - 3

let N = Int(readLine()!)!
var i = N

while i > 0 {
    for _ in 0..<i {
        print("*", terminator: "")
    }
    print()
    i -= 1
}
