#include<stdio.h>
int main()
{/*用%x他就会以十六进制的方式去输出*/
	int a=0;
	printf("请输入一个十进制的数:\n",a);
	scanf("%d",&a);
	printf("%x",a);
	return 0;
}