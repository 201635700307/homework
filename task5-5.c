#include <stdio.h>
int main ()
{ int a=2,n,b,sum,i;
sum=0;
i=1;
b=0;
printf("??¨º?¨¨?n¦Ì??¦Ì¡êo");
scanf_s("%d",&n);
while (i<=n)
{b=b*10+a;
sum=b+sum;
i++;
}
printf("?¨¢1??a%d",sum);
return 0;
}