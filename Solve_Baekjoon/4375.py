while True:
    try:
        N=int(input());
    except EOFError:
        break;
    
    if N==1:
        print(1);
        continue;
        
    num = 1;
    cnt = 1;
    while True:
        num=num*10+1;
        cnt+=1;
        if (num%N)==0:
            print(cnt);
            break;