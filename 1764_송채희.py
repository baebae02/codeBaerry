#1
# N, M=map(int, input().split())
# name1=set()
# name2=set()
# all_names=set()

# for i in range(N):
#     name=input()
#     name1.add(name)
#     all_names.add(name)

# for i in range(M):
#     name=input()
#     name2.add(name)
#     all_names.add(name)

# answer=[]

# for name in all_names:
#     if name in name1 and name in name2:
#         answer.append(name)

# answer.sort()

# print(len(answer))
# for name in answer:
#     print(name)

#2
N, M=map(int, input().split())
name1=set()
name2=set()

for i in range(N):
    name=input()
    name1.add(name)

for i in range(M):
    name=input()
    name2.add(name)

print(len(name1&name2))
for i in list(name1&name2):
    print(i)



        
        

