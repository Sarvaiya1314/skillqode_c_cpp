#include<stdio.h>
#define SIZE 10
int front=-1,rear=-1,queqe[SIZE],i;
void RearInsert(int val)  
{
    if(rear>SIZE)

    {
        printf("Queqe Is Full:");
    }
    else if(rear==-1 && front==-1)
    {
        front=rear=0;
        queqe[rear]=val;
    }
    else
    {
        queqe[++rear]=val;
    }                
} 
void FrontDelete()
{
    if(front==-1)
    {
        printf("Queue is Full:");
    }
    else if(front==rear)
    {
        int x=queqe[front];
        front=rear=-1;
    }
    else
    {
        int x=queqe[front++];
    }
}
void print()
{
    if(front==-1)
    {
        printf("Queqe Is Empty :"); 
    }
    else
    {
        for(i=front;i<=rear;i++)
            printf("\n\t\tq[%d]=%d",i,queqe[i]);
    }
} 
int main()
{
    int ch,val;
    do 
    {
        printf("\n press 1 for-->> push");
        printf("\n press 2 for-->> pop");
        printf("\n press 3 for-->> show");
        printf("\n press 0 for-->> exit");
        printf("\nenter your choice=");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Enter Value:");
            scanf("%d",&val);
            RearInsert(val);
            break;
        case 2:
            FrontDelete();
            break;
        case 3:
            print();
            break;
       

        }
    }
    while(ch!=0);
    
    
}
         