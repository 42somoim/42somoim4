import Foundation

let N = Int(readLine()!)!
var a = readLine()!.components(separatedBy: " ").map{ Int($0)! }

var dp = [Int](repeating: 0, count: 1001)
dp[0] = a[0]

var max = dp.max()!

for i in 0..<N {
    var val = [Int](repeating: 0, count: N)
    var check = 0
    for j in 0..<i {
        if a[i] > a[j] {
            val[j] = dp[j] + a[i]
            if val.max()! > max {
                max = val.max()!
                check = 1
            }
        }
    }
    if check == 1 {
        dp[i] = max
    } else {
        dp[i] = val.max()!
    }
    if dp[i] == 0 {
        dp[i] = a[i]
    }
}

print(max)
