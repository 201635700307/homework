#include <stdio.h>
#include <math.h>
int main()
{
	float h,x,y,d1,d2,d3,d4;
	printf("������һ���������(x,y)��\n");
	printf("������õ�ĺ�����x=");
	scanf("%f",&x);
	printf("������õ��������y=");
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
	printf("�õ�Ľ����߶�Ϊ%f",h);
	return 0;
	 
	
}