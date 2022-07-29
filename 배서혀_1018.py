n, m = map(int, input().split())
maps = []
min_map = []

for _ in range(n):
    maps.append(input())

for i in range(n-7):
    for j in range(m-7):
        idx1 = 0
        idx2 = 0
        for ii in range(i, i+8):
            for jj in range(j, j+8):
                if(ii + jj)%2 == 0:
                    # W로 시작
                    if maps[ii][jj] != 'W':
                        idx1 += 1
                    # B로 시작 
                    if maps[ii][jj] != 'B':
                        idx2 += 1
                else:
                    # W로 시작
                    if maps[ii][jj] != 'B':
                        idx1 += 1
                    # B로 시작
                    if maps[ii][jj] != 'W':
                        idx2 += 1
        min_map.append(idx1, idx2) # W로 시작, B로 시작
print(min(min_map))
