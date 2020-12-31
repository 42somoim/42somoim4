import Foundation

let N = Int(readLine()!)!

var dp = [Int](repeating: 0, count: N + 1)

for i in 1...N {
    let val = Int(sqrt(Double(i)))
    for j in 1...val {
        if dp[i] > dp[i - j * j] + 1 || dp[i] == 0 {
            dp[i] = dp[i - j * j] + 1
        }
    }
}

print(dp[N])
