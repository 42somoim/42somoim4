
x = int(input())
dp = [0 for j in range(x+1)]

for i in range(2, x+1):
    dp[i] = dp[i-1]+1
    if i%3 == 0:
        dp[i] = min(dp[i], dp[i//3]+1)
    if i%2 == 0:
        dp[i] = min(dp[i], dp[i//2]+1)
    
print(dp[x])
