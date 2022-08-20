N, K = map(int, input().split())
coin = []
for i in range(N): coin.append(int(input()))

coin.sort(reverse=True)
cnt = 0
for c in coin:
	while c <= K:
		cnt += 1
		K -= c
print(cnt)
