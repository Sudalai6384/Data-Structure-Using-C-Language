#include<stdio.h>
#include<stdlib.h>
void insert();

struct node
{
    int data;
    struct node *right;
    struct node *left;
}*temp,*newnode,root;


int main()
{
insert();
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
   newnode->left=NULL;
   newnode->right=NULL;

   if(root==0)
   {
       root->left=newnode;
       root->right=newnode;
   }
   else if(newnode->data > root)
   {
       temp->left=newnode;
       temp=temp->next;
   }

       printf("Enter the choice");
       scanf("%d",&choice);
        }
     }
