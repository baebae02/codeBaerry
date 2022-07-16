while True:
    s=input()
    stack=[0]
    flag=True
    if s=='.':
        break
    for i in range(len(s)):
        if s[i]=='(':
            stack.append(1)
        elif s[i]=='[':
            stack.append(2)
        elif s[i]==')':
            if stack[-1]==1:
                stack.pop()
            else:
                flag=False
                break
        elif s[i]==']':
            if stack[-1]==2:
                stack.pop()
            else:
                flag=False
                break
    if stack==[0] and flag:
        print('yes')
    else:
        print('no')