#include<stdio.h>
#include<stdlib.h>

int create();
int display();
int insertfront();
int insertend();
void insertmid();
/*int deletefront();
int deleteend();
int deletemid();
int count();
int search();*/




struct node
{
  int data;
  struct node*next,*prev;

}
*newnode,*temp,*tail,*head=0;


int main()
{
int option;

while(1)
{
  printf("1.create\n");
  printf("2.display\n");
  printf("3.insertfront\n");
  printf("4.insertend\n");
  printf("5.insertmid\n");
  printf("6.deletefront\n");
  printf("7.deleteend\n");
  printf("8.deletemid\n");
  printf("9.count\n");
  printf("10.search\n");

scanf("%d",&option);

switch(option)
{
   case 1:
    create();
    break;
    case 2:
    display();
    break;
    case 3:
    insertfront();
    break;
    case 4:
    insertend();
    break;
    case 5:
    insertmid();
    break;
    /*case 6;
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
    break;*/
}
}
}
int create()
{
int choice=1;
    while(choice)
{
        newnode=malloc(sizeof(struct node));
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
}

int insertend()
{
     newnode=malloc(sizeof(struct node));
    printf("enter the end data\n");
    scanf("%d",&newnode->data);
    newnode->next=0;

   temp=head;
   while(temp->next!=0)
   {
       temp=temp->next;
   }
      temp->next=newnode;
      newnode->prev=temp;
return 0;
}


int display()
{
    temp=head;
    while(temp->next!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("%d\n",temp->data);

  return 0;
}

int insertfront()
{
    struct node*newnode;
        newnode=(struct node*)(malloc(sizeof(struct node)));
    printf("enter the data");
    scanf("%d",&newnode->data);

        newnode->next=head;

        head->prev=newnode;
        head=newnode;

        return 0;
}


void insertmid()
{   int i;
    int pos;
    scanf("%d",&pos);
    struct node*newnode;
        newnode=(struct node*)(malloc(sizeof(struct node)));
    printf("enter the data");
    scanf("%d",&newnode->data);


    for(i=1;i<pos;i++)
    {
        temp=temp->next;
    }
        temp->prev->next=newnode;
        newnode->prev=temp->prev;
        newnode->next=temp;
        temp->prev=newnode;
display();



}
