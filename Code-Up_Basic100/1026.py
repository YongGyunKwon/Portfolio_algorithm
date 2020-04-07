import io,sys

sys.stdout=io.TextIOWrapper(sys.stdout.buffer,encoding='utf8')

h,m,s=input().split(':')

print("%d" % int(m))