import io,sys

sys.stdout=io.TextIOWrapper(sys.stdout.buffer,encoding='utf8')

yyyy,mm,dd=input().split(".")


print("%02d" %int(dd),end='-')
print("%02d" %int(mm),end='-')
print("%04d" %int(yyyy))