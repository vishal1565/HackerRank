n = int(input())
p = [int(i) for i in input().split()]
for i in range(n):
    print(p.index(p.index(i+1)+1)+1
