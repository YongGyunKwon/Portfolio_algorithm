a=str(input())
b=int(a,16)

for i in range(1,16):
    print("%X*%X=%X"%(b,i,b*i))