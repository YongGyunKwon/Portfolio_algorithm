import io,sys

sys.stdout=io.TextIOWrapper(sys.stdout.buffer,encoding='utf8')

a,b=input().split(' ')

a=int(a)
b=int(b)

if(a==b):
    print(1)
else:
    print(0)