import io,sys

sys.stdout=io.TextIOWrapper(sys.stdout.buffer,encoding='utf8')

##round로 자릿수 지정
a=round(float(input()),2)

print("%.2f"% a)