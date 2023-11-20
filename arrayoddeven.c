#include<stdio.h>
int main(){
    int n,arr[n],i,odd=0,even=0;
    printf("enter the size of array :");
    scanf("%d",&n);
    printf("Enter the arr element : ");

    for (i = 0;i<n;i++){
        scanf("%d",&arr[i]);

    }      
        for(int j = 0;j<n;j++){
            if(arr[i]%2==0){
            even=even+arr[i];
         }
        else{
            odd = odd+arr[i];
        
        }

        
    } 
    printf("%d",even);
    printf("%d",odd);
    return 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
}
