import io,sys
sys.stdout=io.TextIOWrapper(sys.stdout.buffer,encoding='utf8')

a,b,c=input().split(' ')

a=int(a)
b=int(b)
c=int(c)

sum=a+b+c

print("%d" %(sum))
print("%.1f" %(sum/3))