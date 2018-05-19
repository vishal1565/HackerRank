from itertools import combinations_with_replacement
s,n=input().split()
s=sorted(s)
n=int(n)
a=list(combinations_with_replacement(s,n))
for i in a:
    print(*i,sep='')
