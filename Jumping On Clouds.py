n=int(input())
a=[int(i) for i in input().split()]
jump=0
i=0
while i<n-1:
    if i+2<=n-1 and a[i+2]==0:
        i+=2
        jump+=1
    else:
        i+=1
        jump+=1
if i==n-1:
    print(jump)
else:
    print(jump+1)
