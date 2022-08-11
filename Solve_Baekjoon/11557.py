T = int(input());

for input_cycle in range(T):
    N=int(input());
    max_drink=0;
    maxName="";
    for i in range(N):
        now_name,now_drink=input().split();
        now_drink=int(now_drink);
        if max_drink<now_drink:
            max_drink=now_drink;
            maxName=now_name;
    print(maxName);