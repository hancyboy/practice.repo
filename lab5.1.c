#include <stdio.h>
int main()
{
    int a,b,l,i,h;
    printf("enter the number\n");
    scanf("%d %d",&a,&b);
    for(l=1;l<=a*b;l++)
    {if(l%a==0 && l%b==0)
    break;

    }printf("the lcm is %d\n",l);
    i=a<b?a:b;
    for (h=i;h>=i;i++)
    {
        if(a%h==0&&b%h==0)
            break;
    }printf("the hcf is %d",h);return 0 ;
}
