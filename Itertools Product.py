from itertools import product
a=list(map(int,input().strip().split(' ')))
b=list(map(int,input().strip().split(' ')))
p=list(product(a,b))
print(*p,sep=' ')
