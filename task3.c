#include <stdio.h>
#include "math.h"
int main()
{
	int a;
	int b;
	printf("������һ��С��1000������\n");
	scanf("%d",&a);
	if (a>=1000)
	{
		printf("����������һ��С��1000����\n");
	scanf("%d",&a);
	}
	else{
		b=sqrt(a);
		printf("%d��ƽ��������������%d\n",a,b);
	}
	return 0;
}
 