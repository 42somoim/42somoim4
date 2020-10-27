import Foundation

//11721 열 개씩 끊어 출력하기

let src = readLine()!.map{ $0 }
var cnt = 0

for i in src {
    if cnt == 10 {
        print()
        cnt = 0
    }
    print(i, terminator: "")
    cnt += 1
}
print()
