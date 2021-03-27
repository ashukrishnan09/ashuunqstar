#include<stdio.h>

int main()
{
    int a ,i=1,f=1;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    
while(i<=a){
    f=f*i;
    i++;
    }
    printf("The value of %d factorial is %d :  ",a,f);
}



