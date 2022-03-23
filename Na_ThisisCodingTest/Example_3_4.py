#1이 될때까지

N,K=map(int,input().split());

count = 0;

while N!=1:
    if N%K==0:
        N=N/K;
        count=count+1;
    else:
        N=N-1;
        count=count+1;        

print(count);
