baduk=[]

for i in range(20):
    baduk.append([])
    for j in range(20):
        baduk[i].append(0)

n=int(input())

for j in range(n):
    x,y=input().split()
    baduk[int(x)][int(y)]=1

for i in range(1,20):
    for j in range(1,20):
        print(baduk[i][j],end=' ')
    print()