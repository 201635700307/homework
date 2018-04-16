#include <stdio.h>
#include "math.h"
int main()
{
	int a;
	int b;
	printf("请输入一个小于1000的正数\n");
	scanf("%d",&a);
	if (a>=1000)
	{
		printf("请重新输入一个小于1000的数\n");
	scanf("%d",&a);
	}
	else{
		b=sqrt(a);
		printf("%d的平方根整数部分是%d\n",a,b);
	}
	return 0;
}
 