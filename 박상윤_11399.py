# 방법1
n=int(input())
time_list=list(map(int,input().split()))
time_list.sort()
sum=0
for i in range(n):
    for j in range(i+1):
        sum+=time_list[j]
print(sum)

# 방법2
# n=int(input())
# time_list=list(map(int,input().split()))
# time_list.sort(reverse=True)
# sum=0
# for i in range(n):
#     for j in range(i,n):
#         sum+=time_list[j]
# print(sum)