#include<stdio.h>
/*do{
       <循环体语句>
    }while（<循环条件>）;(记住要加分号)*/

int main(){
int x = 0;
scanf("%d",&x);
int n = 0;
do{
    x/=10;//x/=10表示x除以10的结果赋值给x，x/10只是算数运算，不会改变x的值//
    n++;
}while(x>0);
printf("%d",n);
}