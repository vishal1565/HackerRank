from itertools import permutations
s,n=input().split()
k=int(n)
s=sorted(s)
a=list(permutations(s,k))
for i in a:
    print(*i,sep='')
