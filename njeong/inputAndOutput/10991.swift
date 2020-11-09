import Foundation

//10991 별찍기 - 16

let N = Int(readLine()!)!
var i = 1

while i <= N {
    var cnt = 0
    for _ in 0..<N - i {
        print(" ", terminator: "")
    }
    print("*", terminator: "")
    cnt += 1
    while cnt < i {
        print(" *", terminator: "")
        cnt += 1
    }
    print()
    i += 1
}
