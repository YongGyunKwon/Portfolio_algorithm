import io,sys

sys.stdout=io.TextIOWrapper(sys.stdout.buffer,encoding='utf8')

a=input()

##ord(a)는 문자의 아스키 코드 값을 돌려주는 함수
n=ord(a)

print(n)