#include<stdio.h>

int main(){
    int a , b  , c;
    char op;


    printf("Enter the operation to perform : Addition , SUBSTRACTION , MULTIPLICATION , DIVISION :");
    printf("Initials of the following functions");
    scanf("%c", &op);

    if (op == a){
        printf("Enter the two numbers: ");

        scanf("%d%d", &a,&b);

        c = a + b;
        
    }

    elif (op == s){
        printf("Enter the two numbers: ");

        scanf("%d%d", &a,&b);

        c = a - b;

    }

    elif ( op == m){
        printf("Enter the two numbers: ");

        scanf("%d%d", &a,&b);

        c = a * b;


    }

    elif ( op == d){
        printf("Enter the two numbers: ");

        scanf("%d%d", &a,&b);

        c = a / b;

    }

    

    //printf("Enter the two numbers: ");

    //scanf("%d%d", &a,&b);

    

    //printf("sum = %d\n", c = a + b);

    //printf("SUb = %d\n", c = a - b);

   // printf("multiply = %d\n", c  = a * b);

    //printf("Div = %d\n", c = a / b);

}

