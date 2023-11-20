#include<stdio.h>
int main(){

    int a,b,c,sum;

    printf("Enter the value of a , b and c :");

    scanf("%d%d%d",&a,&b,&c);

    sum = a+b+c;

    printf("Total sum is : %d\n",sum);

    if (sum >=100 && sum <=200){
        printf("sum is between 100 to 200 !");

    }
    else{
        printf("The sum is not between 100 and 200 ");
    }

    return 0;




}
