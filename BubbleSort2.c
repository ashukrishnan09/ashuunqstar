#include<stdio.h>
void swap( int *xp, int *yp)
{
    int temp;
    temp=*xp;
    *xp=*yp;
    *yp=temp;

}
void BubbleSort(int arr[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    for(j=0;j<n-i-1;j++)
    if(arr[j] > arr[j+1])
    swap(&arr[j],&arr[j+1]);
    
   
}
void printArray(int arr[],int size)
{
    int i;
    for (i=0;i<size;i++)
    printf("%d\t",arr[i]);
   
//Driver code to test above functions
int main()
{
    int arr[] = {66,60,55,46,58};
    int  n = sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr,n);
    printf("Sorted array : \n");
    printArray(arr,n);
    return 0;
}

