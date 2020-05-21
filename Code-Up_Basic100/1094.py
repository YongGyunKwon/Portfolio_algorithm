n=int(input())
a=input().split()


number=[]

for i in range(0,n):
    number.append(int(a[i]))

for j in range(n-1,-1,-1):
    print(number[j],end=' ')