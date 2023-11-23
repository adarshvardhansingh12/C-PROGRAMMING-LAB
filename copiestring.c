#include<stdio.h>
void main()
{
    char a[100],b[100];
    printf("enter the string ");
    scanf("%[^\n]s",a);
    int l=strlen(a);
    for(int i=0;i<l;i++)
    b[i]=a[i];
    printf("the copied string is =%s",b);
}
