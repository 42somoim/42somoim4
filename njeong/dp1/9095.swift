import Foundation

let N = Int(readLine()!)!

func dp(_ num: Int) {
    var res = [Int](repeating: 0, count: 11)
    res[1] = 1
    res[2] = 2
    res[3] = 4
    
    var i = 4
    while i <= num {
        res[i] = res[i - 3] + res[i - 2] + res[i - 1]
        i += 1
    }
    print(res[num])
}

for _ in 0..<N {
    let num = Int(readLine()!)!
    dp(num)
}
