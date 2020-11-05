import Foundation

let N = Int(readLine()!)!
var res = [[Int]](repeating: [Int](repeating: 0, count: 11), count: 101)

for i in 1...9 {
    res[1][i] = 1
}

var i = 2
while i <= N {
    res[i][0] = res[i - 1][1]
    res[i][10] = 0
    for j in 1...9 {
        res[i][j] = (res[i - 1][j - 1] + res[i - 1][j + 1]) % 1000000000
    }
    i += 1
}

print(res[N].reduce(0, +) % 1000000000)
