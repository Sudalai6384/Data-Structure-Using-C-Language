#include <stdio.h>
#include<stdlib.h>
struct node *insert(int arr[],int val);
void display(struct node *head);

struct node
{
    int data;
    struct node *next;
    struct node *prev;
    struct node *child;
}*newnode,*head,*temp,*tail,*head1,*head2,*head3;


int main() {
    int arr1[]={1,2,3,4,5,6};
    int arr2[]={7,8,9,10};
    int arr3[]={11,12};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int n1=sizeof(arr2)/sizeof(arr2[0]);
    int n2=sizeof(arr3)/sizeof(arr3[0]);
    struct node *head1=insert (arr1,n);
    struct node *head2=insert (arr2,n1);
    struct node *head3=insert (arr3,n2);
    head1->next->next->child=head2;
    head2->next->child=head3;
    display(head3);
}

struct node *insert(int arr[],int val)
{
    struct node *head=0;struct node *tail=0;struct node *temp=0;
    int i;
    for(i=0;i<val;i++)
    {
   newnode=(struct node*)malloc(sizeof(struct node)) ;
   newnode->data=arr[i];
   newnode->next=0;
   newnode->child=0;
   if(head==NULL)
   {
       head=newnode;
       tail=newnode;
   }
   else
   {
       temp=head;
       while(temp->next!=0)
       {
           temp=temp->next;
       }
       temp->next=newnode;
       newnode->prev=temp;
       tail=newnode;
   }
    }
    return head;
}

void display(struct node *head)
{
    temp=head;
    while(temp->next!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
     printf("%d ",temp->data);

}
