#include<iostream>
using namespace std;

int main()
{
    int dice_A,dice_B,dice_C;
    int result=0;

    cin>>dice_A>>dice_B>>dice_C;

    if((dice_A==dice_B) && (dice_B==dice_C))
    {
        result=10000+dice_A*1000;
    }
    else if(dice_A==dice_B || dice_A==dice_C)
    {
        result=1000+dice_A*100;
    }
    else if(dice_B==dice_C)
    {
        result=1000+dice_B*100;
    }
    else
    {
        result=max(max(dice_A,dice_B),dice_C)*100;
    }
    
    cout<<result;
}