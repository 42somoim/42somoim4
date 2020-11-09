import Foundation

let N = Int(readLine()!)!
var res = [[Int]](repeating: [Int](repeating: 0, count: 11), count: 1001)

for i in 0...9 {
    res[1][i] = 1
}

var i = 2
while i <= N {
    for j in 0...9 {
        var k = 0
        while k <= j {
            res[i][j] += res[i - 1][j - k] % 10007
            k += 1
        }
    }
    i += 1
}

print(res[N].reduce(0, +) % 10007)
