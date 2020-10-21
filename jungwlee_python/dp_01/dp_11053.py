n = int(input())
values = list(map(int, input().split()))

dp = [1] * n

for i in range(1,n):
    for j in range(i):
        if values[j] < values[i]:
            dp[i] = max(dp[i], dp[j] + 1)

print(max(dp))
