import Foundation

let N = Int(readLine()!)!

for _ in 0..<N {
    let idx = Int(readLine()!)!
    
    var dp = [Int](repeating: 0, count: 101)
    dp[0] = 1
    dp[1] = 1
    dp[2] = 1
    
    if idx > 2 {
        for i in 3..<idx {
            dp[i] = dp[i - 3] + dp[i - 2]
        }
    }
    
    print(dp[idx - 1])
}
