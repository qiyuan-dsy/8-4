#include<stdio.h>
int main(){
    int a=0;
    printf("请输入一个三位数：",a);
    scanf("%d",&a);
    int b=a/100;
    int c=a%10;//最后一个
    int d=a/10%10;//
    printf("输出的三位数是:%d%d%d",c,d,b);
    return 0;

    
}