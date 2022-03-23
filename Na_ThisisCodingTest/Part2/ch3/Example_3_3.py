#숫자카드게임
N,M=map(int,input().split());

result = 0;

for i in range(N):
    
    card_n=list(map(int,input().split()));
    
    min_n=min(card_n);

    result=max(result,min_n);

print(result);
