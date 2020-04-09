import io,sys

sys.stdout=io.TextIOWrapper(sys.stdout.buffer,encoding='utf8')

a,b=input().split(' ')

a=int(a)
b=int(b)


for i in range(1,b+1):
    a=a*2

print(a)