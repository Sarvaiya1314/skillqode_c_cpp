#include<stdio.h>

void Insert(int a[])
{
    for(int  i=0; i<5; i++)
    {
     printf("Enter  A[%d] : ",i);
     scanf("%d",&a[i]);
    }
}
void print(int a[])
{
    for(int i=0; i<5; i++)
    {
    printf("\n %d - %u",a[i]);
    }
}
void last_insert(int a[])
{
    
    a[6]=66;
}
int main()
{
    int a[6];

    Insert(a);
    print(a);
    last_insert(a);
    

    for(int i=0; i<=6; i++)
    printf("\n %d - %u ",a[i],a++);

    
   
   
}