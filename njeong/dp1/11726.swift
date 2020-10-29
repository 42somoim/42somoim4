import Foundation

let N = Int(readLine()!)!
var res = [Int](repeating: 0, count: 1001)

res[1] = 1
res[2] = 2

var idx = 3
while idx <= N {
    res[idx] = (res[idx - 2] + res[idx - 1]) % 10007
    idx += 1
}

print(res[N])
