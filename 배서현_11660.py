import sys
N, M = map(int, sys.stdin.readline().split())
total_sum_x = [0] * N
for i in range(N):
	one_line_sum_x = [0]
	x = list(map(int, sys.stdin.readline().split()))
	temp_sum = 0
	for j in x:
		temp_sum += j
		one_line_sum_x.append(temp_sum)
	total_sum_x[i] = one_line_sum_x

for i in range(M):
	x1, y1, x2, y2 = map(int, sys.stdin.readline().split())
	result = 0
	for j in range(x1,x2+1):
		result += total_sum_x[j-1][y2] - total_sum_x[j-1][y1-1]
		print("j", j, "y1", y1, "y2", y2, result)
	print("result",result)

print(total_sum_x)
