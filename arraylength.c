#include<stdio.h>
int main(){
    int n;
    printf("Enter the length of the array :");
    scanf("%d",&n);
    int a[n],i;
    printf("Enter the elements of the array: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int j;
    for(i =0;i<n-1;i++){
        int k = 0;
        for (j=k+1;j<n-i;j++){
            if(a[k]>a[j]){
                int t=a[j];
                a[j]=a[k];
                a[k]=t;
            }
            k++;
        }
    }
    printf("the sorted array\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    

}
