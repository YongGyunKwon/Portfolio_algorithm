a=input()

#python은 switch case 가 존재하지 않으므로 함수 정의 해가지고.. 
def f(x):
    return {'A':'best!!!','B':'good!!','C':'run!','D':'slowly~'}.get(x,'what?')


print(f(a))