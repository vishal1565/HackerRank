n = int(input())
a = [int(i) for i in input().split()]
b = set(a)
print(((sum(b)*n)-(sum(a)))//(n-1))
