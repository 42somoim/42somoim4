import Foundation

//2441 별찍기 - 4

let N = Int(readLine()!)!
var i = N

while i > 0 {
    for _ in 0..<N - i {
        print(" ", terminator: "")
    }
    for _ in 0..<i {
        print("*", terminator: "")
    }
    print()
    i -= 1
}
