n=int(input())

def hanoi(n,L,M,R):
    if n==1:
        print(L,R)
    else:
        hanoi(n-1,L,R,M)
        print(L,R)
        hanoi(n-1,M,L,R)
        #print(M,'->',R)
# print(hanoi(n,'1','2','3'))
print(2**n-1)
hanoi(n,'1','2','3') 

# h(3)=2*h(2)+1=7
# h(2)=2*h(1)+1=3
# h(1)=1
# h(n)=2*h(n-1)+1