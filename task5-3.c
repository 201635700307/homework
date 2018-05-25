#include<stdio.h>
int main()
{
	int a,b,c,n,m;
	printf("请输入两个数");
	printf("请输入一个数n=");
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
	printf("公约数%d\n公倍数%d\n",m,c/m);
	return 0;
} 