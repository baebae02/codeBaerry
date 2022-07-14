# list로 구현한 stack
s_list = [1, 2, 3, 4, 5]

print(s_list)
print(s_list.pop())
print(s_list)

s_list.pop(2)
print(s_list)

print(s_list.pop(1))
print(s_list)

print(s_list.append(1))
print(s_list)

print(s_list.append(2))
print(s_list)

print(len(s_list) == 0)
print("==============\n\n\n")
# deque로 구현한 stack
from collections import deque

s_top = deque([1, 2, 3, 4, 5])  # 덱 생성 1
s_top2 = deque() # 덱 생성 2
s_top2.append(1)
s_top2.append(2)
s_top2.append(3)
s_top2.append(4)
s_top2.append(5)
print(s_top)
print(s_top[-1])
print(s_top)

print(s_top2)
print(s_top2[-1])
print(s_top2)
