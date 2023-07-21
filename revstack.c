#include <stdio.h>
#include <stdlib.h>
void display();
void display1();
int push();
void push1();
int main()
{
    int x=push();

     push1(x);
      display();
     display1();
}
struct node
{
    int data;
    struct node *next;
}*top=0,*newnode,*temp;

int push()
{
    int count=0;
    int choice=1;
    while(choice==1)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(top==0)
        {
            top=newnode;
        }
        else
        {
            newnode->next=top;
            top=newnode;
        }
        count++;
        printf("Enter the choice");
         scanf("%d",&choice);
    }
    return count;
}

struct node1
{
    int data1;
    struct node1 *next1;
}*top1=0,*newnode1,*temp1;

void push1(int a)
{
    temp=top;
    while(a!=0)
    {
        newnode1=(struct node1*)malloc(sizeof(struct node1));
        newnode1->data1=temp->data;
        newnode1->next1=0;
    if(top1==0)
    {
        top1=newnode1;
    }
    else
    {
        newnode1->next1=top1;
            top1=newnode1;
    }

    a--;
    temp=temp->next;
    }
}


void display()
{
    temp=top;
    while(temp->next!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d ",temp->data);
}



void display1()
{
    temp1=top1;
    while(temp1->next1!=0)
    {
        printf("%d ",temp1->data1);
        temp1=temp1->next1;
    }
    printf("%d ",temp1->data1);
}
