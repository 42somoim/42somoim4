import Foundation

//1924 2007년

let N = readLine()!.components(separatedBy: " ").map{ Int($0)! }
var cnt = 0
var res = ""

let date = ["MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"]
let days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

if N[0] > 1 {
    for i in 0..<N[0] - 1 {
        cnt += days[i]
    }
}

cnt += N[1] - 1

res = date[cnt % 7]
print(res)
