x = int(input())
dp = [0, 1]

if x == 1 :
    print(dp[1])
else :
    for i in range(2, x+1) :
        dp.append(dp[i-1] + dp[i-2])
    print(dp[x])
