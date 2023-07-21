#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
printf("Enter the size of array:");
scanf("%d",&n);
int arr[n];
int i,top;
int peek=-1;


    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    peek++;
    }

    top=arr[peek];

    for(i=peek;i>=0;i++)
    {
    printf("%d",arr[i]);
    }
}



