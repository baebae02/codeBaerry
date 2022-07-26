st = input()
ans = set()
for i in range(len(st)):
	for j in range(i + 1, len(st) + 1):
		ans.add(st[i:j])
print(len(ans))
