import sys
a=list(map(int,input().strip().split(' ')))
a.sort()
min=max=0
for i in range(0,4):
    min=min+a[i];
    max=max+a[i+1]
print(min,max)
