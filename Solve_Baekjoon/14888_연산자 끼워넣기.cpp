#include<iostream>
#include<cmath>
 
#define endl "\n"
#define MAX 11
using namespace std;
 
int N;
int Arr[MAX];
int Plus, Minus, Multiple, Divide;
int Operator_Num, Max_Value, Min_Value;
 
void Input()
{
    Max_Value = -1000000001;
    Min_Value = 1000000001;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> Arr[i];
    }
    cin >> Plus >> Minus >> Multiple >> Divide;
    Operator_Num = N - 1;
}
 
void DFS(int Pl, int Mi, int Mul, int Div, int Sum, int N_Idx, int Cnt)
{
    if (Cnt == Operator_Num)
    {
        if (Max_Value < Sum) Max_Value = Sum;
        if (Min_Value > Sum) Min_Value = Sum;
        return;
    }
 
    if (Pl < Plus) DFS(Pl + 1, Mi, Mul, Div, Sum + Arr[N_Idx], N_Idx+1, Cnt + 1);
    if (Mi < Minus) DFS(Pl, Mi + 1, Mul, Div, Sum - Arr[N_Idx], N_Idx + 1, Cnt + 1);
    if (Mul < Multiple) DFS(Pl, Mi, Mul + 1, Div, Sum * Arr[N_Idx], N_Idx + 1, Cnt + 1);
    if (Div < Divide) DFS(Pl, Mi, Mul, Div + 1, Sum / Arr[N_Idx], N_Idx + 1, Cnt + 1);
}
 
void Solution()
{
    DFS(0, 0, 0, 0, Arr[0], 1, 0);
    cout << Max_Value << endl << Min_Value << endl;
}
 
void Solve()
{
    Input();
    Solution();
}
 
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    Solve();
 
    return 0;
}