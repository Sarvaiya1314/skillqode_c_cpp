#include<stdio.h>
//#define SIZE 10
//#define pr printf
int a[10],top=-1,val;
void push(int val)
{
    
    if(top>=10)
    {
        printf("Stack Overflow");

    }
    else{
        printf("enter Number : ");
        scanf("%d",val);
        a[++top]=val;
    }


}
int pop(int x)
{
    if(top<0)
    {
        printf("stack underflow");
    }
    else
    {
        x=a[top--];
    }
    return x;
}
int main()
{
    int x;
    push(10);
    push(20);
    pop(x);
    //printf("\n Deleted Value : %d ",x);
    printf("\n Value : %d",x);
    
}