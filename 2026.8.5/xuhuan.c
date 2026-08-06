#include<stdio.h>
//用while循环来实现判断位数//
int main()
{
   int x =0;
   int m =0;
   printf("请输入任意的整数:",x);
   scanf("%d",&x);
   m++;
   x/=10;
   if (x<0){
    x=-x;}
   while(x>0)
   {
    m++;
    x/=10;
   } 
   printf("这个整数的位数是:%d\n",m);
   return 0;
}
