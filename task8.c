#include <stdio.h>
int main()
{
	int a,b,c,d,m;
	printf("请输入四个整数");
	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    if(a>b) 
	{m=a;a=b;b=m;}
    if(a>c)
    {m=a;a=c;c=m;} 
    if(a>d) 
	{m=a;a=d;d=m;} 
    if(b>c) 
	{m=b;b=c;c=m;} 
    if(b>d) 
	{m=b;b=d;d=m;} 
    if(c>d) 
	{m=c;c=d;d=m;}
    printf("按从小到大的顺序输出");
	printf("%d,%d,%d,%d",a,b,c,d);
	return 0; 
}