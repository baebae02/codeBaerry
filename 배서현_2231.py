N = int(input())
for i in range(1, N+1):
	result = sum(map(int, list(str(i)))) + i 
	if result == N:
		print(i)
		break
	if i == N:
		print(0)
