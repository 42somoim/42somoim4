x = int(input())

dp = [[0 for i in range(10)] for j in range(x)]
dp[0] = [1 for i in range(10)]

for i in range(1, x):
    for j in range(10):
        for k in range(j, 10):
            dp[i][k] += dp[i - 1][j]

print(sum(dp[-1]) % 10007)
