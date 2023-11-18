//program to accessing array

#include<stdio.h>
int main(){
    int x,num=0;
    printf("Enter the element you want to search : ");
    scanf("%d",&x);

    int arr[]={1,22,35,5,4,6,8};
    int i,size=0;
    size=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<size;i++){
        if(arr[i]==x){
            //num+=i;
            printf("Elemnt found at position :%d",i);
            num=1;

            break;}
        }
        
        if(!num){
        printf("Elemnt not found!");
       }
       //printf("%d\n",arr[i]);
       
    
   // printf("Elemnt found at position :%d",i);
    //printf("%d",sizeof(arr));
    return 0;
}
