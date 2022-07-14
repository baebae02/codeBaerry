import sys
from collections import deque


def check_str(st):
    stack = deque()
    for i in st:
        if i == '(':
            stack.appendleft(i)
        elif i == ')':
            if len(stack) > 0 and stack[0] == '(':
                stack.popleft()
            else:
                return "no"
        elif i == '[':
            stack.appendleft(i)
        elif i == ']':
            if len(stack) > 0 and stack[0] == '[':
                stack.popleft()
            else:
                return "no"
    if len(stack) != 0:
        return "no"
    else:
        return "yes"


s = sys.stdin.readline()

while s != '.\n':
    print(check_str(s))
    s = sys.stdin.readline()
