import sys
n=int(input())
a=list(map(int,input().strip().split(' ')))
a.sort()
count=0
for i in range(n):
    if(a[-i]==a[-1]):
        count+=1
print(count)
