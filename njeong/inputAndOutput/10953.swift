import Foundation

//10953 A + B - 6

let N = Int(readLine()!)!
var src: [Int] = []
var res = 0

for _ in 0..<N {
    src = readLine()!.components(separatedBy: ",").map{ Int($0)! }
    res = src.reduce(0, +)
    print(res)
}
