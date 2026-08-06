#include<stdio.h>
int main()
{
    int x;
    printf("请输入一个整数", x);
    scanf("%d",&x);
    int digit;
    int ret = 0;
    while(x>0){
    digit = x % 10;
    //printf("%d", digit);//实现输出每一位数字，但ret也没有保留的必要了//
    ret = ret * 10 + digit;//ret = ret * 10 + digit;表示将原来的ret乘以10再加上digit的值，ret的值就会变成原来的值加上digit的值//
    //printf(x=%d,digit=%d,ret=%d\n", x, digit, ret);//实现输出每一位数字//
    x /= 10;
    }
    printf("ret = %d\n", ret);
    return 0;
}