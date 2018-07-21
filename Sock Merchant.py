n = int(input())
a = [int(i) for i in input().split()]
b = set(a)
count = 0
for i in b:
    count += a.count(i)//2
print(count)
