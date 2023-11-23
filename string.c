#include <stdio.h>
int main()
{
    char a[100];
    printf("enter the string\n");
    scanf("%s",a);
    printf("the string is %s\n",a);
    printf("Enter the string\n");
    gets(a);
    printf("the string is %s",a);
    printf("enter the string\n");
    scanf("%[^\n]s",a);
    printf("The string is %s\n",a);

}
