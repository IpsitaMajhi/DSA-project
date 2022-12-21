//binary search tree searching
#include<stdio.h>
#include<stdlib.h>
int bisearch(int *a, int n,int min , int len, int key)
{ if(len<min) return -1;
int mid=(min+len)/2;
if(a[mid]==key) return mid;
if(a[mid]>key) return bisearch(a,n,min,mid-1,key);
if(a[mid]<key) return bisearch(a,n,mid+1,len,key);
}
void linearsearch (int *a)
{ int i, n, key, flag=0;
printf("enter the number of elements in the array");
scanf("%d",&n);
printf("enter the elements of the array");

for(i=0;i<n;i++)
{ scanf("%d",&a[i]);
}
printf("enter the key element to be searched");
scanf("%d",&key);
for(i=0;i<n;i++)
{ if(a[i]==key){
flag=1;
break;
}
}
printf ("the key element is found at %d", a[i]);
}
int main()
{ int a[100];
linearsearch(a);
return 0;
}
