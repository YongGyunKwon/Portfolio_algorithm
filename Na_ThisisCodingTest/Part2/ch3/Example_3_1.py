#거스름돈
N=5400;
Coins=[500,100,50,10]

count=0;

for coin in Coins:
    N=N%coin
    count+=1;

print(count);
