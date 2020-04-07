import io,sys

sys.stdout=io.TextIOWrapper(sys.stdout.buffer,encoding='utf8')

h,m =input().split(':')

print(h+":"+m)