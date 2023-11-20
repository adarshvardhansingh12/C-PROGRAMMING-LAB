#include<stdio.h>
int main(){
    int x,num=0;
    printf("Enter the element position  you want to Delete : ");
    scanf("%d",&x);

    int arr[]={1,22,35,5,4,6,8};
    int i,size=0;
    size=sizeof(arr)/sizeof(arr[0]);

    while(x<size){
        arr[x-1]=arr[x];
        x++;
    }
    size--;
    //print the array
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }

    
