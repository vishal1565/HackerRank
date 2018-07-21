a = {int(i) for i in input().split()}
n = int(input())
flag = True
for _ in range(n):
    b = {int(i) for i in input().split()}
    if b.intersection(a) != b or len(a) <= len(b):
        flag = False
print(flag)
