#include "stdio.h"
int main()
{
	int x;
	int a;
	int b;
	int c;
	int d;
	int e;
	printf("������һ��������5λ��������");
	scanf("%d",&x);
	if (x>=9999)
	{
		printf("����һ����λ��\n");
	}
	else if (x>=999)
	{
		printf("����һ����λ��\n");
	} 
	else if (x>=99)
	{
			printf("����һ����λ��\n");
	}
	else if (x>=9)
	{
			printf("����һ����λ��\n");
	}
	else 
	{
			printf("����һ��һλ��\n");
	}
	printf("ÿһ�����ֱַ���");
	e=x/10000;
	d=(x-e*10000)/1000; 
	c=(x-e*10000-d*1000)/100;
	b=(x-e*10000-d*1000-c*100)/10;
	a=(x-e*10000-d*1000-c*100-b*10);
	printf("%d,%d,%d,%d,%d\n",e,d,c,b,a); 
	printf("���������λ����");
	printf("%d%d%d%d%d",a,b,c,d,e);
	return 0;
} 