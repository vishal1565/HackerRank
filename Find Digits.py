n = int(input())
for _ in range(n):
    num = input()
    count = 0
    for i in num:
        if int(i) !=0 and int(num)%int(i) == 0:
            count += 1
    print(count)
