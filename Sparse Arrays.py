from collections import Counter
a=[]
n = int(input())
for _ in range(n):
    a.append(str(input()))
count = Counter(a)
q = int(input())
for _ in range(q):
    print(*[count[input()]])
