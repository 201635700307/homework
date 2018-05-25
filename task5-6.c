#include <stdio.h>
int main() 
{
	int n,a,sum;
	a=1;
	n=1;
	sum=0;
	while(n<=20)
	{
		sum=sum+a;
		a=a*(a+1);
		n++;
	}
	printf("sum=%d\n",sum);
	return 0;
}