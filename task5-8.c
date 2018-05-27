#include <stdio.h>
int main()
{
	int a,b,c,s;
	for (a=1;a<=9;a++); 
	{
		for (b=1;b<=9;b++);
		{
			for (c=1;c<=9;c++);
			{
				s=100*a+10*b+1*c;
				if (s==(a*a+b*b+c*c))
				printf("%d\n",s); 
			} 
		}
	} 
	return 0;
}