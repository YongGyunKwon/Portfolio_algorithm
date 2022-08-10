import sys;

K,N,M=map(int,input().split());

result=K*N-M;

if result<0:
    result=0;
    
print(result);