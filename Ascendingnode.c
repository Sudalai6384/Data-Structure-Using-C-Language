#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*head,*temp;*temp1;*temp2;

int main()
{   insertion();
    display();
    sorting();
    display1();
     display2();
}
void insertion()
{
    int choice=1;
    while(choice)
    {
        struct node*newnode;
        newnode=malloc(sizeof(struct node));
        printf("enter the data :");
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        if(head==NULL)
        {
        head=temp=newnode;
        }
        else
        {
        temp->next=newnode;
        temp=newnode;
        }
        printf("enter choice 0 or 1 : ");
        scanf("%d",&choice);

    }
    return 0;
}

void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }printf("\n");

}
void sorting()
{
    struct node*temp1=head,*temp2=NULL;
    int temp;

       if(head==NULL)
        {
            return;
        }
else
        {
        while(temp1!=NULL)
        {
            temp2=temp1->next;
            while(temp2!=NULL)
                {
               if(temp1->data>temp2->data)
               {
                   temp=temp1->data;
                temp1->data=temp2->data;
                  temp2->data=temp;
        }
        temp2=temp2->next;
        }
        temp1=temp1->next;
            }
        }
}
void display1()
{
    struct node*temp1=head;
    if(head==NULL){
        return;
        }
     while(temp1!=NULL){
       printf("%d ", temp1->data);
        temp1 = temp1->next;
    }
    printf("\n");
}

void display2()
{
  temp=head;

       printf("%d ", temp->next->data);

}
