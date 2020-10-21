x = int(input())
dp = [0 for j in range(1001)]

dp[1] = 1
dp[2] = 3
dp[3] = 5

for i in range(4,x+1):
    dp[i] = (dp[i-1]+ dp[i-2]*2)
print(dp[x]%10007)
