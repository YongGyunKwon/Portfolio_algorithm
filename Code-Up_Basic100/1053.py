import io,sys

sys.stdout=io.TextIOWrapper(sys.stdout.buffer,encoding='utf8')

a=input()

a=int(a)

if(a==1):
    print(0)
elif(a==0):
    print(1)