#include<stdio.h>
#include<stdlib.h>
int a[20];
int main()
{

    printf("enter the size of Array:");
  int num,i,top=-1;
  scanf("%d ",&num);
  int a[num];

  for(i=0;i<num;i++)
  {
      scanf("%d",&a[i]);
      top++;
  }
printf(" PUSH:");

for(i=top;i>=0;i--)
  {
      printf("%d ",a[i]);
  }


    top--;

printf("\n POP:");

  for( i=top;i>=0;i--)
  {
      printf("%d ",a[i]);
  }




  }
