#include <stdio.h>
int main()
{
    int addd(int,int);
    int a,b,c;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    c=add(a,b);
    printf("sum=%d",c);

}
int add(int x,int y ){
    int z;
    z=x+y;
    return z;

}
