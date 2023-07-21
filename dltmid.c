#include<stdio.h>
#include<stdlib.h>
void push();
void display();
void pop();
void deletemid();
struct node
{
    int data;
    struct node*next;

}*newnode,*temp,*top,*bottom;


void main()
    {
        int c;
        while(1)
        {
        printf("1.push\n2.pop\n3.exit");
        printf("\nEnter ur choice:\n ");
       scanf("%d",&c);
       switch(c)
       {
           case 1:
           push();
           display();
           break;
           case 2:
           pop();
           display();
           break;
           case 3:
               deletemid();
               display();
            break;

           exit(0);
           break;

       }
    }
    }
    void push()
    {
        int choice=1;
        while(choice==1)
    {
        newnode=malloc(sizeof(struct node));
        printf("enter the data :");
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
        printf("enter the choice");
        scanf("%d",&choice);
    }
    }
    void pop()
    {
        temp=top;
        top=top->next;
        free(temp);

    }
    void display()
        {
            temp=top;

         while(temp->next!=0)
         {
             printf("%d \n",temp->data);
             temp=temp->next;
         }
         printf("%d\n",temp->data);
        }

void deletemid(){
    int dlt;
    scanf("%d",&dlt);
    temp=top;
     while(temp->next!=0)
         {
             if(temp->data!=dlt){
             printf("%d \n",temp->data);
             temp=temp->next;}
             else{
                temp=temp->next;
             }

}
}
