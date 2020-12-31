import Foundation

let N = Int(readLine()!)!
var a = readLine()!.components(separatedBy: " ").map{ Int($0)! }

var dp = [Int](repeating: 0, count: N + 1)
dp[0] = a[0]

var maxVal = dp[0]

for i in 1..<N {
    dp[i] = max(dp[i - 1] + a[i], a[i])
    if maxVal < dp[i] {
        maxVal = dp[i]
    }
}

print(maxVal)
