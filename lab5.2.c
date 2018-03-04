#include <stdio.h>
#include <conio.h>
int main()
{
    int a=0,b=1,c;
    printf("the fibonacci series is:\n");
    printf("%d %d",a,b);

    while(c<300)
    {

    c=a+b;
    a=b;
    b=c;
    printf(" %d",c);}
    return 0;
}
