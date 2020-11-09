import Foundation

let N = Int(readLine()!)!

for _ in 0..<N {
    var score: [[Int]] = []
    let _ = Int(readLine()!)!
    score.append(readLine()!.components(separatedBy: " ").map{ Int($0)! })
    score.append(readLine()!.components(separatedBy: " ").map{ Int($0)! })
    
    var dp = [[Int]](repeating: [Int](repeating: 0, count: 100001), count: 2)
    dp[0][1] = score[0][0]
    dp[1][1] = score[1][0]
    
    var idx = 2
    while idx <= score[0].count {
        dp[0][idx] = max(dp[1][idx - 2], dp[1][idx - 1]) + score[0][idx - 1]
        dp[1][idx] = max(dp[0][idx - 2], dp[0][idx - 1]) + score[1][idx - 1]
        idx += 1
    }
    print(max(dp[0][score[0].count], dp[1][score[0].count]))
}
