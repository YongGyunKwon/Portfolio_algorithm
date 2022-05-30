N=int(input());

A=100;
B=100;

for i in range(0,N):
    x,y=map(int,input().split());
    
    if x>y:
        B-=x;
    elif x<y:
        A-=y;

print(A);
print(B);
