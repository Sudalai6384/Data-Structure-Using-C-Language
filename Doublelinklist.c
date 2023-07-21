#include<stdio.h>
#include<stdlib.h>
int main(){
void create();
void display();
/*void insertfront();
void insertend();
void insertmid();
void deletefront();
void deleteend();
void deletemid();
void count();
void search();*/}

struct node
{
    int data;
    struct node *next,*prev;
}*head= NULL,*temp,*newnode,*tail;



while(1){

printf("1.create");
printf("2.display");
printf("3.insertfront");
printf("4.insertend");
printf("5.insertmid");
printf("6.deletefront");
printf("7.deleteend");
printf("8.deletemid");
printf("9.count");
printf("10.search");

scanf("%d",&choose)
switch(choose)
{
    case 1;
    create();
    break;

    case 2;
    void display();
    break;

    case 3;
    insertfront();
    break;

    case 4;
    insertend();
    break;

    case 5;
    insertmid();
    break;

    case 6;
    deletefront();
    break;

    case 7;
    deleteend();
    break;

    case 8;
    deletemid();
    break;

    case 9;
    count();
    break;

    case 10;
    search();
    break;
}

int create()
{

    int choice=1;
    while(choice==1)
        {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data");
        scanf("%d",&newnode->data);

        newnode->next=0;
            newnode->prev=0;


            if(head==0)
            {
                head=newnode;
                temp=newnode;
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
            newnode->prev=newnode;

            temp=newnode;
            tail=newnode;
            }
printf("enter the choice");
scanf("%d",&choice);
}
 return 0;
}

void display()
{
    temp=head;
    while(temp->next!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
    return 0;
}



