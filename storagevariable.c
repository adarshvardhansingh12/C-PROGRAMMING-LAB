#include <stdio.h>
void mikasa();
void main()
{
    mikasa();
    mikasa();
    mikasa();
}
void mikasa()
{
    static int x=1;
    printf("%d\n",x);
    x=x+5;
}
