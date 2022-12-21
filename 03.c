#include<stdio.h>
#include<stdlib.h>

void swap(int *px, int *py) //Swapping
{
  int temp;
  temp = *px;
  *px = *py;
  *py = temp;
}

void sort(int* arr,int n){
    for(int a =0; a<n; a++)
    {
        
        for(int b =0; b<n-a-1; b++) {
            if(arr[b] > arr[b+1]) {
                swap( &arr[b], &arr[b+1]);
            }
        }
    }
}

int main(){
    int n;
    printf("Enter the number of elements:-");
    scanf("%d",&n);
    int *arr = (int*)calloc(n,sizeof(int));
    printf("Enter all the elements spearated by space:- ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    sort(arr,n);

    printf("The array after sorting is:- ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}