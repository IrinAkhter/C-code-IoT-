#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,sum;
    printf("Enter the five digit number\n");
    scanf("%d",&a);

    b=a%10;
    a=a/10;

    c=a%10;
    a=a/10;

    d=a%10;
    a=a/10;

    e=a%10;
    a=a/10;

    sum=b*10000+c*1000+d*100+e*10+a;
    printf("the sum is %d\n",sum);
    return 0;
}
