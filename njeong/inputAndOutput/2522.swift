import Foundation

//2522 별찍기 - 12

let N = Int(readLine()!)!
var i = 1

while i <= N {
    for _ in 0..<N - i {
        print(" ", terminator: "")
    }
    for _ in 0..<i {
        print("*", terminator: "")
    }
    print()
    i += 1
}
i -= 2

while i >= 1 {
    for _ in 0..<N - i {
        print(" ", terminator: "")
    }
    for _ in 0..<i {
        print("*", terminator: "")
    }
    print()
    i -= 1
}
