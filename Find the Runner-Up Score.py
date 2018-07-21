n = int(input())
a = [int(i) for i in input().split()]
a = list(set(a))
a.sort()
print(a[-2])
