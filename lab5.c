#include <stdio.h>
int main()
{
    int a,n,i,sum;
    sum=0;
    printf("enter the number");
    scanf("%d %d",&a,&n);
    for(i=a+1;i<n;i++)
    {
        if(i%2==0)
            sum=sum+i;
    }printf("the sum is %d",sum);
    return 0;
}
