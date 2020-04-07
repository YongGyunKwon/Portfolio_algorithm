import io,sys

sys.stdout=io.TextIOWrapper(sys.stdout.buffer,encoding='utf8')

x=input()

for c in x:
    print("\'"+c+"\'")