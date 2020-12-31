//
//  11052.swift
//  AlgorithmTest
//
//  Created by Mac on 2020/12/31.
//

import Foundation

let N = Int(readLine()!)!
var a = [0] + readLine()!.components(separatedBy: " ").map{ Int($0)! }

var dp = [Int](repeating: 0, count: N + 1)
dp[1] = a[1]

if N > 1 {
    for i in 2...N {
        dp[i] = max(dp[i - 1] + a[1], a[i])
        for j in 1..<i {
            if dp[j] + dp[i - j] > dp[i] {
                dp[i] = dp[j] + dp[i - j]
            }
            if i % j == 0 {
                if a[j] * (i / j) > dp[i] {
                    dp[i] = a[j] * (i / j)
                }
            }
        }
    }
}

print(dp[N])
