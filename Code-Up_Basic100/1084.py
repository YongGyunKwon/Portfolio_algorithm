a,b,c=map(int,input().split())
num=0

for i in range(a):
    for j in range(b):
        for k in range(c):
            print(i,j,k)
            num+=1

print(num)