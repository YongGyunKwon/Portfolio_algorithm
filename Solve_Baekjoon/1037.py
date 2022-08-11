N=int(input());
result=0;

div=list(map(int,input().split()));
div_min=min(div);
div_max=max(div);
result=div_min*div_max;

print(result);