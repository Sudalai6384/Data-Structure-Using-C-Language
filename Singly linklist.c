#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node*next,*prev;

}*newnode,*head,*temp;


int main()
{
int choice=1;
    while(choice==1)
{
        newnode=malloc(sizeof(struct node));
        printf("enter the data  :");
        scanf("%d",&newnode->data);

        newnode->next=NULL;
    if(head==NULL)
    {
    head=newnode;
    }
else
{
temp=head;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=newnode;
newnode->next=head;
}
printf("Enter the choice :");
scanf("%d",&choice);
}}

/*void display()
{

    temp=head;
    while(temp->next!=head)
    {
       printf("%d",temp->data);
       temp=temp->next;
    }
    printf("%d",temp->data);
}*/




