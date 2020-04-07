import io,sys

sys.stdout=io.TextIOWrapper(sys.stdout.buffer,encoding='utf8')

a=input()

n=int(a,16)

print("%o" %n)