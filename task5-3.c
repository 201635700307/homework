#include<stdio.h>
int main()
{
	int a,b,c,n,m;
	printf("������������");
	printf("������һ����n=");
	scanf("%d",&m);
	if(m<n)
	{
		a=m;
		m=n;
		n=a;
	}
	c=n*m;
	while(n!=0)
	{
		b=m%n;
		m=n;
		n=b;
	} 
	printf("��Լ��%d\n������%d\n",m,c/m);
	return 0;
} 