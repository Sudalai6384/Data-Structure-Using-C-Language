#include<stdio.h>
#include<stdlib.h>
void create(int n);
void display()
struct node
{
int data;
struct node *left;
struct node *right;
}*root=NULL,*temp,*temp1;
int main()
{
 int n;
 do
 {
   create(n);
 printf("Enter the number :");
 scanf("%d",&n);
}
while(n>0);

}
void create(int n)
{
  struct node *newnode;

  newnode=(struct node*)(malloc(sizeof(struct node)));
  newnode->data=n;
  newnode->left=NULL;
  newnode->right=NULL;
  int flag;
if(root==NULL)
{
   root=newnode;
   temp=temp1=root;
   flag=0;
}
else if(root->left==NULL && root->right==NULL)
{
  root->left=newnode;
  root->right=newnode;
}
else if(flag==0)
{
   temp=temp->left;
       flag=1;
}
else if(flag==1)
{
   temp=temp1->right;
       flag=0;
    temp1=temp1->left;
}
}
void display(struct node *root)
{
if(root==0){
    return;
    else{
        printf("%d",root->data);
        display(root->left);
        display(root->right);
    }
}

}



void inorder()
