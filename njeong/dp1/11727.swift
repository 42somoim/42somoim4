import Foundation

let N = Int(readLine()!)!
var res = [Int](repeating: 0, count: 1001)

res[1] = 1
res[2] = 3

var i = 3
while i <= N {
    res[i] = (res[i - 1] + 2 * res[i - 2]) % 10007
    i += 1
}

print(res[N])
