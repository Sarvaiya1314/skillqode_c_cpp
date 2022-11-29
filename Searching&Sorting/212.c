#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[10];
    for(int i=0;i<10;i++)
     a[i]=rand()%50;
     for(int i=0;i<10;i++)
       printf("\na[%d] : %d",i,a[i]);
}
