import io,sys

sys.stdout=io.TextIOWrapper(sys.stdout.buffer,encoding='utf8')

a,b=input().split(' ')

a=int(a)
b=int(b)

print("%d" %(a+b))
print("%d" %(a-b))
print("%d" %(a*b))
print("%d" %(int(a/b)))
print("%d" %(a%b))
print("%.2f" %(a/b))