x = int(input())
wine = [0]
max_value = [0]*(x+1)
for i in range(1, N+1):
    wine.append(int(input()))
    if i < 3:
        max_value[i] = sum(wine)
    else:
        target = []
        target.append(max_value[i-3]+wine[i-1]+wine[i])
        target.append(max_value[i-2]+wine[i])
        target.append(max_value[i-1])
        max_value[i] = max(target)
print(max_value[-1])
