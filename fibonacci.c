#include<stdio.h>
int main(){
    int i,fno=0,sno=1,next,num;

    printf("Enter a number upto which you want to print the fibinaci series : ");
    scanf("%d",&num );


    for (i = 2;i<=num;i++){
        printf("%d",i*i*i);
        next = fno+sno;
         printf("%d\n",fno);
        fno=sno;
        sno=next;
        //printf("%d\n",fno);
    }

}
