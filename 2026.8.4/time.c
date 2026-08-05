#include<stdio.h>
int main(){
    int a = 0;
    int b = 0;
    printf("请输入一个四位数的时间：",a);
    scanf("%d",&a);
    printf("请输入流逝的时间:",b);
    scanf("%d",&b);
    int c=a/100*60;
    int d=a%100;
    int e=b+c+d;
    int f=e/60;
    int g=e%60;
    printf("%d %d",f,g);
}