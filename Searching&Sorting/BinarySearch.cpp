#include<iostream>
#include<stdio.h>
#include<stdlib.h>


int main()
{
    int a[10],i,j,temp,l,h;

    for(i=0; i<10; i++)
    {
        printf("\n Enter Number : ");
        scanf("%d",&a[i]);
    
    }
    /*for(i=0; i<10; i++)
    {
        printf("\n %d - A[%d]",i,a[i]);
    
    }*/
    printf("\n----------");
    
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {    
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;  
            }  
        }
        printf("\n");
        printf("%d - [%d] \n",i,a[i]);

        //a[0]=l;
        //a[9]=h;
        
    }
   
        printf("\n low = %d \n High = %d ",l,h);
 
}

