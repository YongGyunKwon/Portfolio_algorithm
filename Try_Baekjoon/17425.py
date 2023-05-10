import sys;

MAX = 1000000;

divlist_sum=[1]*(MAX+1);
divlist=[0]*(MAX+1);

for i in range(1,MAX+1):
    j=1;
    while(i*j<=MAX):
        divlist[i*j]=+i;
        j+=1;
    divlist_sum[i]=divlist_sum[i-1]+divlist[i];
    
T=int(input());
ans=[];

for _ in range(T):
    input_testcase=int(input());
    ans.append(divlist_sum[input_testcase]);

print('\n'.join(map(str,ans))+'\n');
