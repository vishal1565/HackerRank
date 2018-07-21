t = int(input())
while t > 0:
    n, s, start = [int(i) for i in input().split()]
    s = s%n
    res = start + s
    if res > n:
        res -= n
    res -= 1
    if res == 0: res = n
    print(res)

    t -= 1
