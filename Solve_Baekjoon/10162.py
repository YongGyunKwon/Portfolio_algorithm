Result=[0,0,0];

T=int(input());

if T%10!=0:
    print(-1);
else:
    while T!=0:
        if (T-300)>=0:
            Result[0]+=1;
            T=T-300;
        elif T-60>=0:
            Result[1]+=1;
            T=T-60;
        elif T-10>=0:
            Result[2]+=1;
            T=T-10;

    print(Result[0],Result[1],Result[2]);
