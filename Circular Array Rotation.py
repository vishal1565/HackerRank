n, k, q = [int(i) for i in input().split()]
a = [int(i) for i in input().split()]
k = k%n
for i in range(k):
    temp = a[-1]
    del a[-1]
    a.insert(0,temp)
for _ in range(q):
    i = int(input())
    print(a[i])
