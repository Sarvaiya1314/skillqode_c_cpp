#include<stdio.h>
#define SIZE 10
int front=-1,rear=-1,queue[SIZE],i;
void RearInsert(int val)  
{
    if(rear>SIZE)

    {
        printf("Queue Is Full:");
    }
    else if(rear==-1 && front==-1)
    {
        front=rear=0;
        queue[rear]=val;
    }
    else
    {
        queue[++rear]=val;
    }                
} 
void RearDelete()
{
    if(rear==-1)
    {
        printf("Queue is empty:");
    }
    else if(front==rear)
    {
        int x=queue[rear];
        rear=front=-1;
    }
    else
    {
        int x=queue[rear--];
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
        int x=queue[front];
        front=rear=-1;
    }
    else
    {
        int x=queue[front++];
    }
}
void FrontInsert(int val)  
{
    if(front>SIZE)

    {
        printf("Queue Is Full:");
    }
    else if(rear==-1 && front==-1)
    {
        front=rear=0;
        queue[front]=val;
    }
    else
    {
        queue[--front]=val;
    }                
} 
void print()
{
    if(front==-1)
    {
        printf("Queue Is Empty :"); 
    }
    else
    {
        for(i=front;i<=rear;i++)
            printf("\n\t\tq[%d]=%d",i,queue[i]); 
    }
} 
int main()
{
    int ch,val;
    do 
    {
        printf("\n press 1 for-->> RearInnsert");
        printf("\n press 2 for-->> FrontDelete");
        printf("\n press 3 for-->> RearDelete");
        printf("\n press 4 for-->  FrontInsert ");
        printf("\n press 5 for--> ShoW");
        printf("\n press 0 for-->> Exit");
        printf("\n enter your choice :");
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
            
            RearDelete();
            break;
        case 4:
            printf("Enter Value:");
            scanf("%d",&val);
            FrontInsert(val);
            break;
        case 5:
            print();
            break;

        }
    }
    while(ch!=0);
    
    
}
