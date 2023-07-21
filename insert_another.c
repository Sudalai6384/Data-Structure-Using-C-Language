#include <stdio.h>
#include<stdlib.h>
void insert();
void display();
void newinsert();
struct node
{
  int data;
  struct node *next;
}*temp,*head;
int main()
{
    newinsert();
     display();
}
void insert()
{
        int choice=1;
        while(choice==1)
        {
    struct node *newnode;
   newnode=(struct node*)(malloc(sizeof(struct node)));
   printf("Enter the data:");
   scanf("%d",&newnode->data);
   newnode->next=NULL;
   if(head==0)
   {
       head=newnode;
       temp=newnode;
   }
   else
   {
       temp->next=newnode;
       temp=temp->next;
   }

       printf("Enter the choice");
       scanf("%d",&choice);
        }
     }
    void display()
    {
        temp=head;

    while(temp!=0){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    }
void newinsert()
    {
        int choice=1;
        while(choice==1)
        {
    struct node *newnode;
   newnode=(struct node*)(malloc(sizeof(struct node)));
   printf("Enter the data:");
   scanf("%d",&newnode->data);
   newnode->next=NULL;
   if(head==0)
   {
       head=newnode;
       temp=newnode;
   }
   else
   {
       newnode->next=head;
       head=newnode;
   }

       printf("Enter the choice");
       scanf("%d",&choice);
        }
}




