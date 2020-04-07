import io,sys

sys.stdout=io.TextIOWrapper(sys.stdout.buffer,encoding='utf8')

x,y=input().split('.')

print(x+"\n"+y)