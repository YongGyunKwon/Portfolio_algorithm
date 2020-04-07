import io,sys

sys.stdout=io.TextIOWrapper(sys.stdout.buffer,encoding='utf8')

x=input()

for c in range(len(x)):
    print("[%d]" %( int(x[c]) * 10 ** (len(x)-(c+1))))