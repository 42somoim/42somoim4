x = int(input())
temp = []
for i in range(x):
    temp.append(int(input()))
dp = [0 for j in range(12)]

dp[0] = 0
dp[1] = 1
dp[2] = 2
dp[3] = 4
for i in range(4, 12):
    dp[i] = dp[i-3] + dp[i-2] + dp[i-1]
for i in temp:
    if i < 11 and i>-1:
        print(dp[i])
    else:
        print(0)
