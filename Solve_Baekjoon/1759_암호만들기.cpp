#include<iostream>
#include<algorithm>
using namespace std;

/*
암호는 서로다른  L개의 알파벳 소문자들로 구성되며 최소 한개의 모음과 두개의 자음으로 구성되있다.
*/

int L; // L 자리 만들기
int C; // C개의 문자
char P[16];


//P는 입력 받은 배열
//mo is 모음
//ja is 자음
//s 는 패스워드

void go(int i,int cnt,int mo,int ja,string s)
{
    if(cnt==L&&mo>=1&&ja>=2)
    {
        cout<<s<<endl;
        return;
    }
    
    if(i==C)
    {
        return;
    }
     
    if(P[i]=='a'|| P[i]=='e'||P[i]=='i'||P[i]=='o'||P[i]=='u')
    {
                go(i+1,cnt+1,mo+1,ja,s+P[i]);
    }
    else
    {
                go(i+1,cnt+1,mo,ja+1,s+P[i]);
    }
    go(i+1,cnt,mo,ja,s);
            
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>L>>C;

    for(int i=0;i<C;i++)
    {
        cin>>P[i];
    }

    sort(P,P+C);
    
    go(0,0,0,0,"");
    return 0;
}