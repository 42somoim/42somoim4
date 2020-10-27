import Foundation

//2445 별찍기 - 8

let N = Int(readLine()!)!
var i = 1

while i <= N {
    for _ in 0..<i {
        print("*", terminator: "")
    }
    for _ in 0..<(2 * (N - i)) {
        print(" ", terminator: "")
    }
    for _ in 0..<i {
        print("*", terminator: "")
    }
    print()
    i += 1
}

while i <= 2 * N - 1 {
    for _ in 0..<N - i % N {
        print("*", terminator: "")
    }
    for _ in 0..<abs(2 * (N - i)) {
        print(" ", terminator: "")
    }
    for _ in 0..<N - i % N {
        print("*", terminator: "")
    }
    print()
    i += 1
}
