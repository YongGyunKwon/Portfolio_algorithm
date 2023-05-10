#include<stdio.h>

int card[21]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};


void reverse_card(int a,int b)
{
    if (a!=b)
    {
        int work=b-a;
        if(work%2==0)
        {
            
        }
        else
        {

        }


    }
    else
    {
        return;
    }
}

int main()
{
    for(int turn_index=0;turn_index<20;turn_index++)
    {
        int a,b;
        scanf("%d %d",&a,&b);

        reverse_card(a,b);
    }

    for(int card_index=1;card_index<=20;card_index++)
    {
        printf("%d ",card[card_index]);
    }
}