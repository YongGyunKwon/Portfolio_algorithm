a,m,d,n=map(int,input().split())

sum=a

for i in range(1,n):
    sum=sum*m+d

print(sum)