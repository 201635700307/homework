#include <stdio.h>
#include <math.h>
int main()
{
	float h,x,y,d1,d2,d3,d4;
	printf("请输入一个点的坐标(x,y)：\n");
	printf("请输入该点的横坐标x=");
	scanf("%f",&x);
	printf("请输入该点的纵坐标y=");
	scanf("%f",&y);
	d1=(x-2)*(x-2)+(y-2)*(y-2);
	d2=(x-2)*(x-2)+(y+2)*(y+2);
	d3=(x+2)*(x+2)+(y+2)*(y+2);
	d4=(x+2)*(x+2)+(y-2)*(y-2);
	if (d1>1&&d2>1&&d3>1&&d4>1)
	{
		h=0;
	}
	else
	{
		h=10;
	}
	printf("该点的建筑高度为%f",h);
	return 0;
	 
	
}