import sys
n=int(input())
a=" "
b="#"
for i in range(0,n):
    if(i!=n-1):
        print(a*(n-2-i),b*(i+1))
    else:
        print(b*(n))
