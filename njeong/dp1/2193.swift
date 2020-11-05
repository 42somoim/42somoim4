import Foundation

let N = Int(readLine()!)!
var res = [[Int]](repeating: [Int](repeating: 0, count: 3), count: 91)

res[1][1] = 1
res[2][0] = 1

var i = 3
while i <= N {
    res[i][0] = res[i - 1][0] + res[i - 1][1]
    res[i][1] = res[i - 1][0]
    i += 1
}

print(res[N].reduce(0, +))
