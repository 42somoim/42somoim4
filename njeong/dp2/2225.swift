//
//  2225.swift
//  AlgorithmTest
//
//  Created by Mac on 2020/12/31.
//

import Foundation

let N = readLine()!.components(separatedBy: " ").map{ Int($0)! }

var dp = [[Int]](repeating: [Int](repeating: 0, count: 201), count: 201)

for i in 1...N[0] {
    dp[i][1] = 1
}

for i in 1...N[1] {
    dp[1][i] = i
}

if N[0] > 1 {
    for i in 2...N[0] {
        if N[1] > 1 {
            for j in 2...N[1] {
                dp[i][j] = (dp[i][j - 1] + dp[i - 1][j]) % 1000000000
            }
        }
    }
}

print(dp[N[0]][N[1]] % 1000000000)
