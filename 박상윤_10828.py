from collections import deque
import sys
st=deque([])
def push(X):
    st.appendleft(X)

def pop():
    if len(st)!=0:
        st.popleft()
        print(st.popleft())
    else:
        print('-1')

def size():
    print(len(st))

def empty():
    if len(st)==0:
        print('1')
    else:
        print('0')

def top():
    if len(st)!=0:
        print(st(0))
    else:
        print('-1')
        
n=int(input(''))


for a in range(n):
    command=sys.stdin.readline().split()
    
    if command[0]==top:
        top()
    elif command[0]==size:
        size()
    elif command[0]==empty:
        empty()
    elif command[0]==pop:
        pop()
    elif command[0]==push:
        push(command[1])
    
