#include <stdio.h>
#include<stdlib.h>
int a[30],cnt=0;
void bublesort(int n)
{
    printf("\n");
    for(int i=0;i<n;i++)    
    {
        for(int j=0;j<n-i-1;j++)    
        {
            cnt++;
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                
            }
        
        }
       
    }
}

int main()
{
    int i,n;
    printf("How many elements are u going to enter?: ");
    scanf("%d", &n);
    printf("\narray elements:");    
    for (i = 0; i < n; i++)
         a[i] = rand() % 99;    

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    bublesort(n);
    printf("\nSorted array is :");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n cnt : %d ",cnt);
    return 0;
}