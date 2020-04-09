import io,sys

sys.stdout=io.TextIOWrapper(sys.stdout.buffer,encoding='utf8')

a,b= input().split(' ')

a=int(a)
b=int(b)

print(int(a/b))