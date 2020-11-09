import Foundation

//10992 별찍기 - 17

let N = Int(readLine()!)!
var i = 1

while i <= N {
    for _ in 0..<N - i {
        print(" ", terminator: "")
    }
    print("*", terminator: "")
    if i > 1 && i != N {
        for _ in 0..<2 * (i - 1) - 1 {
            print(" ", terminator: "")
        }
        print("*", terminator: "")
    } else if i == N {
        for _ in 0..<2 * N - 2 {
            print("*", terminator: "")
        }
    }
    print()
    i += 1
}
