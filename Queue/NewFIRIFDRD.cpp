#include<stdio.h>
#define SIZE 10
int front=-1,rear=-1,queue[SIZE],i;
void RearInsert(int val)  
{
    //printf("\n front %d rear %d",front,rear);
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
    //printf("\n front %d rear %d",front,rear);
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
    //printf("\n front %d rear %d",front,rear);
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
    //printf("\n front %d rear %d",front,rear);
    if(front>SIZE)

    {
        printf("Queue Is Full:");
    }
    else if(rear==-1 && front==-1)
    {
        front=rear=0;
        queue[front]=val;
    }
    // else if(front==0)
    // {
    //     printf("0000");
    // }
    
    else
    {
        queue[--front]=val;
    }                
} 
void print()
{
    //printf("\n front %d rear %d",front,rear);
    
    
    if(front==-1)
    {
        printf("\n Queue Is Empty :"); 
    }
    else if(front=0)
    {
        printf("\n queue is full ");
    }
    else
    {
        for(i=front;i<=rear;i++)
            printf("\n q[%d]=%d",i,queue[i]); 
    }
} 
int main()
{
    int ch,val;
    do 
    {
        printf("\n press 1 for-->> rear_insert");
        printf("\n press 2 for-->> front_delet");
        //printf("\n press 3 for-->> show");
        printf("\n press 4 for--> rear_delet");
        printf("\n press 5 for--> frot_insert");
        printf("\n press 0 for-->> exit");
        printf("\nenter your choice=");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Enter Value:");
            scanf("%d",&val);
            RearInsert(val);
            printf("\n front %d rear %d",front,rear);
            print();
            break;
        case 2:
            FrontDelete();
             printf("\n front %d rear %d",front,rear);
             print();
            break;
        
        case 4:
            RearDelete();
             printf("\n front %d rear %d",front,rear);
             print();
            break;
        case 5:
            printf("Enter Value:");
            scanf("%d",&val);
            FrontInsert(val);
             printf("\n front %d rear %d",front,rear);
             print();
            
            break;
        
        }
    }
    while(ch!=0);
            
           
    
    
}
