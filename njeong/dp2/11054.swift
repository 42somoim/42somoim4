import Foundation

let N = Int(readLine()!)!
var a = readLine()!.components(separatedBy: " ").map{ Int($0)! }

var dp1 = [Int](repeating: 0, count: 1001)
var dp2 = [Int](repeating: 0, count: 1001)

for i in 0..<N {
    var min = 0
    for j in 0..<i {
        if a[i] > a[j] {
            if min < dp1[j] {
                min = dp1[j]
            }
        }
    }
    dp1[i] = min + 1
}

for i in stride(from: N - 1, through: 0, by: -1) {
    var min = 0
    for j in stride(from: N - 1, through: i, by: -1) {
        if a[i] > a[j] {
            if min < dp2[j] {
                min = dp2[j]
            }
        }
    }
    dp2[i] = min + 1
}

var res = [Int](repeating: 0, count: 1001)

for i in 0..<N {
    res[i] = dp1[i] + dp2[i]
}

print(res.max()! - 1)
