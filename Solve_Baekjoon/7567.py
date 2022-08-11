bowl=list(str(input()));

result=10;

for i in range(1,len(bowl)):
    if bowl[i-1]==bowl[i]:
        result+=5;
    else:
        result+=10;

print(result);