TC=int(input());

for T in range(0,TC):
    Yonsei=0;
    Korea=0;
    for i in range(1,9):
        Y,K=map(int,input().split());
        Yonsei+=Y;
        Korea+=K;
    
    if Yonsei>Korea:
        print("Yonsei");
    elif Yonsei<Korea:
        print("Korea");
    else:
        print("Draw");