import Foundation

//2442 별찍기 - 5

let N = Int(readLine()!)!
var i = 1

while i <= N {
    for _ in 0..<N - i {
        print(" ", terminator: "")
    }
    for _ in 0..<2 * i - 1 {
        print("*", terminator: "")
    }
    print()
    i += 1
}
