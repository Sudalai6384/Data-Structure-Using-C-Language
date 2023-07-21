#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
}*root,*temp,*temp1;
int main()
{
    int n;
do
    {
       create();
       printf("Enter the data :");
       scanf("%d",&n);
    }
    while(n>0);
}
void create()
{
    int flag;
    struct node *newnode;
    newnode=(struct node*)(malloc(sizeof(struct node)));
    newnode->left=0;
    newnode->right=0;
    if(root==0)
        {
            root=newnode;
            temp=newnode;
            temp1=newnode;
        }
        else
        {
            if(temp->left==0)
        {
            temp->left=newnode;
            temp1=newnode;
        }
         else if(temp->right==0)
        {
            temp->right=newnode;

        }
        else if(flag==0)
        {
            temp=temp->left;
            flag=1;
        }
        else
        {
            temp=temp->right;
            flag=0;
            temp1=temp->left;
        }
        }
}
