#include<stdio.h>
#include<stdlib.h>

int insert();
int display();
int insertEnd();
int insertFront();
struct node
{
  int data;
  struct node*next;
}
*newnode,*temp,*head,*tail;

int main()
{
    insert();
    display();
    insertEnd();
    insertFront();
    return 0;
}

int insert()
{
    int choice=1;
    while(choice)
    {
        newnode=malloc(sizeof(struct node));
        printf("enter the data :");
        scanf("%d",&newnode->data);

        newnode->next=0;

    if(head==0)
    {
        head=newnode;
        newnode->next=head;
    }

    else
    {
        temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=head;
        tail=newnode;
    }

printf("enter the choice :");
scanf("%d",&choice);


    }
    return 0;
}



int display()
{
    temp=head;
    while(temp->next!=head)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("%d\n",temp->data);
    return 0;
}


int insertEnd()
{
    struct node*newnode;
        newnode=(struct node*)(malloc(sizeof(struct node)));
    printf("enter the data to be inserted at end:");
    scanf("%d",&newnode->data);
        if(temp->next==head){
        temp->next=newnode;
        newnode->next=head;}
        display();


        return 0;
}


/*int insertBegin()
{
    struct node*newnode;
        newnode=(struct node*)(malloc(sizeof(struct node)));
    printf("enter the data to be inserted at end:");
    scanf("%d",&newnode->data);
    while(temp->next!=head){
    temp=head;
head=newnode;
newnode->next=temp;
display();
    }
return 0;

}*/

int insertFront()
{
    struct node*newnode;
        newnode=(struct node*)(malloc(sizeof(struct node)));
    printf("enter the data");
    scanf("%d",&newnode->data);

        newnode->next=head;
        head=newnode;
        display();
        return 0;
}




