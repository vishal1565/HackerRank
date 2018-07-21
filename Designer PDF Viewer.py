height = [int(i) for i in input().split()]
s = input()
a = []
for i in s:
    a.append(height[ord(i)-97])
print(max(a)*len(s))
