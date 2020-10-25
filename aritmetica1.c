#include <stdio.h>

int main ()
{
    int x,y,r1;
    float a,b,r2;

    x=10;
    y=3;
    r1=x/y;
    printf("%d/%d=%d\n",x,y,r1);

    a=10;
    b=3.0;
    r2=a/b;
    printf("%f/%f=%f\n",a,b,r2);

    printf("%dx%f=%f\n",x,a,x*a);
    printf("%d/%f=%f\n",x,b,x/b);

    return 0;
}
