n, d = [int(i) for i in input().split()]
a = [int(i) for i in input().split()]
rotate = d%n
for i in range(rotate):
    temp = a[0]
    del a[0]
    a.append(temp)
print(*a)
