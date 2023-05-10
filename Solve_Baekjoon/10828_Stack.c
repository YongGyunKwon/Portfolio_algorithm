#include<stdio.h>
#include<string.h>

#define STACK_SIZE 10000
int stack_boj[STACK_SIZE];
int stack_boj_size = -1;

void push_stack(int push_number)
{
    stack_boj_size++;
    stack_boj[stack_boj_size]=push_number;
    
}

int pop_stack()
{
    if (stack_boj_size<0)
    {
        return -1;
    }
    else
    {
        return stack_boj[stack_boj_size--];
    }
}

int empty_stack()
{
    if(stack_boj_size<0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int top()
{
    if(stack_boj_size<0)
    {
        return -1;
    }
    else
    {
        return stack_boj[stack_boj_size];
    }
}

int size()
{
    return stack_boj_size+1;
}


int main()
{
    int N; //order

    scanf("%d",&N);

    for(int try_order=0;try_order<N;try_order++)
    {
        char order_type[10];
        int push_number;

        scanf("%s",&order_type);
        
        if(!strcmp(order_type,"push"))
        {
            scanf("%d\n",&push_number);
            push_stack(push_number);
        }
        else if(!strcmp(order_type,"pop"))
        {
            printf("%d\n",pop_stack());
        }
        else if(!strcmp(order_type,"size"))
        {
            printf("%d\n",size());
        }
        else if(!strcmp(order_type,"empty"))
        {
            printf("%d\n",empty_stack());
        }
        else if(!strcmp(order_type,"top"))
        {
            printf("%d\n",top());
        }

    }
}

