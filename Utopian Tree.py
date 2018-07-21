t = int(input())
n, h = [],[]
height = 1
for i in range(t):
    n.append(int(input()))
h.append(height)
for i in range(1,max(n)+1):
    if i%2 == 1:
        h.append(2*h[-1])
    else:
        h.append(h[-1]+1)
for i in n:
    print(h[i])
