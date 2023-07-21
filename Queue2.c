#include<stdio.h>
#include<stdlib.h>

void enqueue();
void dequeue();
void display();
struct node
{
  int data;
  struct node*next;
}
*newnode,*temp,*rear,*front;

void main()
{

int option;
while(1)
{
printf("\n1.enqueue\n");
printf("2.dequeue\n");
printf("3.display\n");

printf("enter your choice(1,2,3):\n");
scanf("%d",&option);

switch(option)
{
case 1:
    {
      enqueue();
        break;
    }
case 2:
    {
        dequeue();
        break;
    }

case 3:
    {
        display();
        break;
    }
}
}
}



void enqueue()
{
    int choice=1;
    while(choice)
    {
        newnode=malloc(sizeof(struct node));
        printf("enter the data\n");
        scanf("%d",&newnode->data);

        newnode->next=0;

    if(rear==0)
    {
        rear=front=newnode;
    }

    else
    {
        rear->next=newnode;
        rear=newnode;

    }



printf("enter the choice\n");
scanf("%d",&choice);


    }
}

void dequeue()
{
    temp=front;
    front=front->next;
    free(temp);
}

void display()
{
    temp=front;
    while(temp->next!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}
