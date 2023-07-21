#include<stdio.h>
#include<stdlib.h>
int insert();
void display();
struct node
{
    int data;

    struct node *next,*prev
}*newnode,*head,*head1,*head2,*head3,*temp,*tail,*child;





int main()
{
    int a[6]={1,2,3,4,5,6};
        int b[4]={7,8,9,10};
    int c[2]={11,12};

    head1=insert(a,6);
    head2=insert(b,4);
    head3=insert(c,2);



    display();

}
int insert(int a[],int n)
{ int i;

   for( i=0;i<n;i++)
   {
    newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=a[i];


    newnode->next=0;

if(tail==0&&head==0)
{

    head=tail=newnode;
}
else
{

    temp=tail;

    temp->next=newnode;
    tail=newnode;
}

    }
    return head;
}





void display()
{
    temp=head;
    while(temp->next!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;

    }
    //printf("%d\n",temp->data);
    printf("%d\n",tail->data);

}
