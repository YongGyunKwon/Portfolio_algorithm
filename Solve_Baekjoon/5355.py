T=int(input());


for i in range(T):
    mars=list(input().split());
    result=float(mars[0]);
    
    for mars_index in range(1,len(mars)):
        if mars[mars_index]=='@':
            result=result*3;
        elif mars[mars_index]=='%':
            result=result+5;
        elif mars[mars_index]=='#':
            result=result-7;
    
    print("%0.2f" %result);