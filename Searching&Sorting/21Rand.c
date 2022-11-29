#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[10];
    int b[10];
    int i,j;

    for(i=0; i<5; i++)
    {
        a[i]=rand()%30+10;

    }
    for(j=0; j<5; j++)
        {
            b[j]=rand()%13+1;
        }

    for(i=0; i<5; i++)
    {
        printf("\n a[%d]: %d",i,a[i]); 
    }
    for(j=0; j<5; j++)
        {
            printf("\n B[%d]: %d",j,b[j]);
        }

}