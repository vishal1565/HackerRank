n = int(input())
percent, rec, tmp = [], [], []
for _ in range(n):
    temp = input()
    temp = list(temp.split())
    rec.append(temp[0])
    for i in range(1,len(temp)):
        tmp.append(float(temp[i]))
    percent.append(sum(tmp)/3)
    tmp = []
q = input()
for i in range(n):
    if rec[i] == q:
        print ("{0:.2f}".format(percent[i]))
        break
