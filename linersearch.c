//linear search tree searching
#include<stdio.h>
#include<stdlib.h>
void linearsearch (int *a)
{
int i, n, key, flag=0;
printf("enter the number of elements in the array");
scanf("%d",&n);
printf("enter the elements of the array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);

}
printf("enter the key element to be searched");

scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key){
flag=1;
break;
}

}
printf ("the key element is found at %d", a[i]);

}

int main()
{
int a[100];
linearsearch(a);
return 0;
}