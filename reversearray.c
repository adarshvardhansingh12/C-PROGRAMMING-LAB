#include<stdio.h>
int main()
{
    int arr1[30],arr2[30],ele,num,i,loc;
    printf("enter the size of array");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        printf("enter the element[%d]",i);
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<num;i++){
        arr2[i]=arr1[i];
    }
    for(i=0;i<num;i++){
        printf("%d\t",arr2[i]);
    }
    for(i=num;i>=0;i--){
        printf("%d\t",arr2[i]);
    }


}
