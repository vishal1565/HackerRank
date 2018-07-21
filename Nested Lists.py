n = int(input())
names, marks = [], []
for i in range(2*n):
    if i%2 == 0:
        names.append(input())
    else:
        marks.append(float(input()))
temp = list(set(marks))
temp.sort()
tmp = temp[1]
temp = []
i = marks.index(tmp)
while True:
    if i < n and marks[i] == tmp:
        temp.append(names[i])
        i += 1
    else: 
        break
temp.sort()
print(*temp,sep='\n')
