n=int(input())

b=list(input().split())

min=23

for i in range(n):
    if(int(b[i])<int(min)):
        min=b[i]

print(min)