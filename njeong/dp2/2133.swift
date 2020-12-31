import Foundation

let N = Int(readLine()!)!

var dp = [Int](repeating: 0, count: N + 1)
dp[0] = 1

if N >= 2 {
    dp[2] = 3
}

if N > 2 && N % 2 == 0 {
    for i in stride(from: 4, through: N, by: 2) {
        dp[i] = dp[i - 2] * 3
        for j in stride(from: 4, through: i, by: 2) {
            dp[i] += dp[i - j] * 2
        }
    }
}

print(dp[N])
