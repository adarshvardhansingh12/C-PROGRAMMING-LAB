#include <stdio.h>
int main()
{
    void add();
    add();
   

}
void add(){
    int a,b,z;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    z=a+b;
    printf("sum=%d",z);

}
