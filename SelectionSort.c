#include<stdio.h>
//Driver code test below function
int main(){
     int arr[]={63,23,12,10,25};
     int n = sizeof(arr)/sizeof(arr[0]);
     selectionSort(arr,n);
     printf("Sorted array : \n");
     printArray(arr,n);
     return 0;
 }

void swap(int *xp,int *yp)
{
    int temp;
    temp= *xp;
    *xp=*yp;
    *yp=temp;

}
void selectionSort(int arr[],int n )
{
    int i,j,min_idx;
    //One by one move boundary of unsorted subarray
    for(i=0;i<n-1;i++)
    {
        min_idx=i;
        for(j=i+1;j<n;j++)
        if(arr[j]<arr[min_idx])
        min_idx=j;
        //swap the found minimum element with the first element 
        swap(&arr[min_idx],&arr[i]);
    }
}
//Function to print array
void printArray(int arr[],int size){
int i ;
for(i=0;i<size;i++){
    printf("%d",arr[i]);
    printf("\n");

}
}
 