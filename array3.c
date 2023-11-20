#include<stdio.h>
int main()
{
    int arr[30],ele,num,i,loc;
    printf("enter the size of array");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        printf("enter the element[%d]",i);
        scanf("%d",&arr[i]);
    }
    printf("enter the element to insert");
    scanf("%d",&ele);
    printf("enter the location");
    scanf("%d",&loc);
    for(i=num;i>=loc;i--){
        arr[i]=arr[i-1];
    }
    num++;
    arr[loc-1]=ele;
    for(i=0;i<num;i++){
    printf("\n %d",arr[i]);
    }
}

