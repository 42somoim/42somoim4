import Foundation

let N = Int(readLine()!)!
var src: [Int] = []

for _ in 0..<N {
    src.append(Int(readLine()!)!)
}

var dp = [Int](repeating: 0, count: N + 1)
dp[0] = src[0]

for i in 1..<N {
    if i == 1 {
        dp[i] = dp[i - 1] + src[i]
    } else if i == 2 {
        dp[i] = max(dp[i - 2] + src[i], src[i - 1] + src[i])
    } else {
    dp[i] = max(dp[i - 3] + src[i - 1] + src[i], dp[i - 2] + src[i])
    }
}

print(dp[N - 1])
