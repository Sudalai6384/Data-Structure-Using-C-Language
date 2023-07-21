#include<stdio.h>
#include<stdlib.h>

int main(){
int n,i;
int rear=0;

printf("\n1.enqueue\n");
printf("2.dequeue\n");
printf("3.display\n");

switch(option)
{
case 1:
    {
      enqueue();
        break;
    }
case 2:
    {
        dequeue();
        break;
    }

case 3:
    {
        display();
        break;
    }
case 4:
    {
        exit(0);
    }
}

void enqueue(){
printf("Enter number of elementts:");
scanf("%d",&n);
int arr[n];

for(i=0;i<n;i++){
scanf("%d",&arr[i]);}}

void display()
{
for(i=rear;i<n;i++){
printf("%d",arr[i]);
}
}

void dequeue(){
rear++;
display();
}

}
