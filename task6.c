#include "stdio.h"
int main()
{
	int x;
	int a;
	int b;
	int c;
	int d;
	int e;
	printf("请输入一个不多于5位的正整数");
	scanf("%d",&x);
	if (x>=9999)
	{
		printf("这是一个五位数\n");
	}
	else if (x>=999)
	{
		printf("这是一个四位数\n");
	} 
	else if (x>=99)
	{
			printf("这是一个三位数\n");
	}
	else if (x>=9)
	{
			printf("这是一个两位数\n");
	}
	else 
	{
			printf("这是一个一位数\n");
	}
	printf("每一个数字分别是");
	e=x/10000;
	d=(x-e*10000)/1000; 
	c=(x-e*10000-d*1000)/100;
	b=(x-e*10000-d*1000-c*100)/10;
	a=(x-e*10000-d*1000-c*100-b*10);
	printf("%d,%d,%d,%d,%d\n",e,d,c,b,a); 
	printf("倒序输出各位数字");
	printf("%d%d%d%d%d",a,b,c,d,e);
	return 0;
} 