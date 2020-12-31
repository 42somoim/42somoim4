//
//  2011.swift
//  AlgorithmTest
//
//  Created by Mac on 2020/12/31.
//

import Foundation

let N = readLine()!
var str: [String] = []

for i in N.indices {
    str.append(String(N[i]))
}

func dp(_ str: [String]) -> Int {
    var dp = [Int](repeating: 1, count: str.count + 1)

    if str.isEmpty || str[0] == "0" {
        return 0
    }
    for i in 1..<str.count {
        if str[i] == "0" {
            if Int(str[i - 1])! > 2 || Int(str[i - 1])! == 0 {
                return 0
            }
        }
    }

    if str.count > 1 {
        for i in 2...str.count {
            if Int(str[i - 1])! == 0 {
                dp[i] = dp[i - 2] % 1000000
            } else if Int(str[i - 2])! * 10 + Int(str[i - 1])! > 26 || Int(str[i - 2])! == 0 {
                dp[i] = dp[i - 1] % 1000000
            } else {
                dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000
            }
        }
    }
    return dp[str.count]
}

print(dp(str))
