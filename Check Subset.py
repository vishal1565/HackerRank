t = int(input())
while t>0:
    n = int(input())
    a = {int(i) for i in input().split()}
    m = int(input())
    b = {int(i) for i in input().split()}
    if a.intersection(b) == a:
        print("True")
    else:
        print("False")
    
    t-=1
