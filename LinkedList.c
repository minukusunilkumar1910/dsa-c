//---------------------------------------LINKED LIST-----------------------------------------

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};
struct node*head=NULL;

void beginsert();
void endinsert();
void randominsert();
void begdelete();
void enddelete();
void randomdelete();
void search();
void display();
void main()
{
    int choice=0;
    while(choice != 9)
    {
    printf("\n=====================Menu===========================\n");
       printf("\nChoose one option from the following list ...\n");  
        printf("\n===============================================\n");  
        printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete node after specified location\n7.Search for an element\n8.Show\n 9.Exit\n");  
        printf("\nEnter your choice?\n");         
        scanf("\n%d",&choice);  
    switch(choice)
    {
        case 1:
        {
            beginsert();
            break;
        }
        case 2:
        {
            endinsert();
            break;
        }
        case 3:
        {
            randominsert();
            break;
        }
        case 4:
        {
            begdelete();
            break;

        }
        case 5:
        {
            enddelete();
            break;
        }
        case 6:
        {
            randomdelete();
            break;
        }
        case 7:
        {
          search();
            break;
        }
        case 8:
        {
         display();

            break;

        }
        case 9:
        {
            printf("Exiting.........");
            break;
        }
        default :
        {
            printf("Enter the valid choice");
        }

    }
 
  }

}
 

void beginsert() {
    int val;
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter the value: ");
    scanf("%d", &val);
    newnode->data = val;
    newnode->next = head;
    head = newnode;
    printf("\nNode is inserted\n");
}

void endinsert()
{
    int val;
    struct node*newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter the value");
    scanf("%d",&val);
    newnode->data=val;
    newnode->next=NULL;
    
    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
      struct node*temp = head;
      while(temp->next != NULL)
      {
        temp=temp->next;
      }
      temp->next=newnode;
    }
      printf("\nnode is inserted");
    
}

void randominsert()
{
struct node*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
int val;
printf("\nEnter the value ");
scanf("%d",&val);
struct node*temp = head;
newnode->data=val;
newnode->next=NULL;

if(head== NULL)
{
    head == newnode;
}
else
{
    int pos;
    printf("\n Enter the position");
    scanf("%d",&pos);
    for(int i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next = newnode;

}
  printf("\n node is inserted");
}


void begdelete()
{
    struct node*temp=head;
    if(head == NULL)
    {
        printf("\nlist is empty");
    }
    else if(head->next==NULL)
    {
        head=NULL;
        free(temp);
    }
    else
    {
       head=temp->next;
       free(temp);
    }
    printf("\n node is deleted");
}
void enddelete()
{
    struct node*temp1=head;
    struct node*temp2;
    if(head == NULL)
    {
        printf("\nlist is empty");
    }
    else if(head->next==NULL)
    {
        head=NULL;
        free(temp1);
    }
    else
    {         
       while(temp1->next != NULL)
       {
        temp2 = temp1;
        temp1 =temp1 ->next;
       }
       temp2->next=NULL;
       free(temp1);
    }
    printf("\n node is deleted");
}

void randomdelete()
{
    struct node *ptr,*ptr1;  
    int loc,i;    
    printf("\n Enter the location of the node after which you want to perform deletion \n");  
    scanf("%d",&loc);  
    ptr=head;  
    for(i=0;i<loc;i++)  
    {  
        ptr1 = ptr;       
        ptr = ptr->next;  
              
        if(ptr == NULL)  
        {  
            printf("\nCan't delete");  
            return;  
        }  
    }  
    ptr1 ->next = ptr ->next;  
    free(ptr);  
    printf("\nDeleted node %d ",loc+1); 
}
void search()  
{  
    struct node *ptr;  
    int item,i=0,flag;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter item which you want to search?\n");   
        scanf("%d",&item);  
        while (ptr!=NULL)  
        {  
            if(ptr->data == item)  
            {  
                printf("item found at location %d ",i+1);  
                flag=0;  
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            ptr = ptr -> next;  
        }  
        if(flag==1)  
        {  
            printf("Item not found\n");  
        }  
    }     
          
}  
void display()
{
      struct node*temp;
     
    if(head==NULL)
    {
        printf("\nList is empty");
    }
    else
    {
       temp=head;
        printf("\nThe values are..............\n");
        while(temp != NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}
