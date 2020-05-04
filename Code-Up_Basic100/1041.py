import io,sys

sys.stdout=io.TextIOWrapper(sys.stdout.buffer,encoding='utf8')

a=input()

#ord()는 문자->아스키코드 변환 
n=ord(a)
c=chr(n+1)

print(c)