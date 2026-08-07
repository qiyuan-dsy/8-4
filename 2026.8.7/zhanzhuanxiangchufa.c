#include<stdio.h>
//辗转相除法
/*如果b等于零，计算结束，a就是最大公约数；
否则，计算a除以b的余数，让a等于b，而b等于那个余数
回到第一步*/
/*
a   b   t(余数)
12  18  12
18  12  6
12  6   0
6   0
最大公约数6
*/
int main(){
    int a,b;
    int t=0;
    printf("请输入两个整数：");
    scanf("%d %d",&a,&b);
    int c=a;
    int d=b;
    while(b!=0){
    t=a%b;
    a=b;
    b=t;}
    printf("%d和%d的最大公约数是%d",c,d,a);
    return 0;
    
    }//最小公倍数=axb/最大公约数。