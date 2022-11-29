#include<stdio.h>
#include<conio.h>  
int main()
{
    int a[20],i,x,n;
    printf(" how many enter your numbers  :");
    scanf("%d",&n);
     
    
    for(i=0;i<=n;i++)
    {
        a[i]=rand()%50,+1;
        printf("\n Your value is : %d",a[i]);
    }
    printf("\nEnter element to search  :");
    scanf("%d",&x);
     
    for(i=0;i<n;++i)
        if(a[i]==x)
            break;
     
    if(i<n)
        printf("your possion number  is %d  ",i+1);
    else
        printf("Element not found  ");
  
    return 0;
}