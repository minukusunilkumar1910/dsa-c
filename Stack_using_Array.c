//-------------------------------------STACK OPERATIONS--------------------------------
#include<stdio.h>
int stack[50],i,n,choice=0,top=-1;
  
void push();
void pop();
void isempty();
void isfull();
void peek();
void display();

void main()
{
    printf("Enter the size of the stack");
    scanf("%d",&n);
    printf("***stack operation using arrays***\n");
    printf("-------------------------------------------\n");
    while(choice != 7)
    {   printf("\n--------------MENU-----------------");
        printf("\nchoose your choice\n");
        printf("1.push\n2.pop\n3.isempty\n4.isfull\n5.peek\n6.display\n7.exit");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
        {
            push ();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            isempty ();
            break;
        }
        case 4:
        {
            isfull ();
            break;
        }
        case 5:
        {
            peek ();
            break;
        }
        case 6:
        {
            display ();
            break;
        }
        case 7:
        {
            printf("Existing......");
            break;
        }
        default:
        {
           printf("Enter a valid choice");
            break;
        }
      };
    }
}
void push()
{
    int val;
    if(top == n)
    {
        printf("stack is full\n");
     }
     else{
        printf("ENter the value..\n");
        scanf("%d",&val);
        top = top+1;
        stack[top]=val;
     }
}
void pop()
{
    if (top == -1)
    {
        printf("stack is empty");
    }
    else{
        top =top -1;
    }
}     
void isempty()
{
    if(top == -1)
    {
        printf("Stack is empty");

    }
    else{
        printf("Stack is not empty");
    }
}
void isfull()
{
    if(top == n)
  {
   printf("stack is full");
   }
   else{
    printf("stack is not full");
   }
}
void peek()
{
    if(top ==-1)
    {
        printf("Stack is empty");
    }
    else{
        printf("The peek values is %d\n",stack[top]);
    }
}
void display()
{
    for(i=top;i>=0;i--)
    {
        printf(" The stack values are %d\n",stack[i]);
    }
    if(top == -1)
    {
        printf("stack is empty");
    }
}
