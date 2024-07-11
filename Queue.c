 
//-------------------------------------------Queue Oprations---------------------------

#include<stdio.h>
#include<stdlib.h>
#define maxsize 5
 int front =-1,rear =-1,choice=0;
 int queue[maxsize];
void insert();
void delete();
void isempty();
void isfull();
void peek();
void display();
 
void main()
{
   while(choice != 7)
   {
    printf("***Queue operations using arrays\n");
    printf("=====================================\n");
    printf("Select your choice\n");
    printf("1.insert\n2.delete\n3.isempty\n4.isfull\n5.peek\n6.diplay\n7.exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            insert();
            break;
        }
          case 2:
        {
            delete();
            break;
        }
        case 3:
        {
            isempty();
            break;
        }
        case 4:
        {
            isfull();
            break;
        }
        case 5:
        {
            peek();
            break;
        }
          case 6:
        {
            display();
            break;
        }
          case 7:
        {
            printf("Exiting.........");
            break;
        }
        default:
        {
            printf("Enter the valid choice\n");
        }
     };
   }
} 
void insert()
{
    int val;
    printf("enter the value\n");
    scanf("%d",&val);
    if(front && rear == maxsize-1)
    {
        printf("queue is full\n");
    }
    if(front == -1 && rear == -1)
    {
        front =0;
        rear =0;
    }
    else
    {
        rear =rear+1;
    }
      queue[rear]=val;
      printf("\n inserted\n");
}
void delete()
{
    int val;
    if(front== -1 && rear ==-1)
    {
        printf("\nqueue is empty\n");
    }
    else{
        val=queue[front];
        if(front == rear)
        {
            front =-1;
            rear =-1;
        }
        else{
            front =front+1;
        }
    }
}
void isempty()
{
    if(front == -1 && rear == -1)
    {
        printf("queue is empty\n");
    }
    else{
        printf("Queue is not empty\n");
    }
}
void isfull()
{
    if(rear == maxsize-1)
    {
        printf("queue is full\n");
    }
    else{
        printf("Queue is not full\n");
    }
}
void peek()
{
      if(front == -1 && rear == -1)
    {
        printf("queue is empty\n");
    }
    else{
        printf("The peek value is %d\n",queue[front]);
    }
}
void display()
{
    if(front== -1 && rear ==-1)
    {
        printf("\nqueue is empty\n");
    }
    else{
        printf("printing the values....\n");
        for(int i=front;i<=rear;i++)
        {
            printf("%d\n",queue[i]);
        }
    }
}
