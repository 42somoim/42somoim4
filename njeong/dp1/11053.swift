import Foundation

let N = Int(readLine()!)!
var a = readLine()!.components(separatedBy: " ").map{ Int($0)! }

var dp = [Int](repeating: 0, count: 1001)
var max = 0

if N == 1 {
    max = 1
}

for i in 0..<N {
    var min = 0
    for j in 0..<i {
        if a[i] > a[j] {
            if min < dp[j] {
                min = dp[j]
            }
        }
    }
    dp[i] = min + 1
    if max < dp[i] {
        max = dp[i]
    }
}
print(max)
