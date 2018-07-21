n ,m = [int(i) for i in input().split()]
res, tmp = [], []
for _ in range(n):
    tmp = [int(i) for i in input().split()]
    res.append(tmp)
    tmp = []
k = int(input())
res.sort(key=lambda x:x[k])
for i in res:
    print(*i)
