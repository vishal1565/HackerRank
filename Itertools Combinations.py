from itertools import combinations
s,n=input().split()
k=int(n)
s=sorted(s)
for i in range(1,k+1):
    a=list(combinations(s,i))
    for j in a:
        print(*j,sep='')
