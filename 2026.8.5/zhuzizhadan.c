/*思路由计算机随机想一个数，记在变量number里；
一个负责计次数的变量count，初始值为0；
输入数字a；
count++;
如果a>number，输出“猜大了”，同理小也是一样的。继续输入数字a；
如果a和number是不相等的(无论大还是小)，程序转会第三层循环，继续输入数字a；
如果a==number，输出“猜对了”，并且输出count的值，结束程序。*/
//rand（）每次召唤就得到了一个随机的整数。
#include<stdio.h>
#include<stdlib.h>//对应rand（）函数
#include<time.h>
int main(){
    srand(time(0));
    int number = rand()%100+1;//rand()函数每次召唤就得到了一个随机的整数。对100取余数再加1，得到1-100之间的随机整数。//
    int count = 0;
    int a = 0;
    printf("我已经想好了1-100之间的一个整数，请你来猜。\n");
    do{
        printf("请输入1-100之间的一个整数:",a);
        scanf("%d",&a);
        count++;
        if(a>number){
            printf("猜大了，请重新输入。\n");
        }else{
            printf("猜小了,请重新输入。\n");
        }

    }while (a!=number);
    printf("你用了%d次就猜到了答案。\n", count);
    return 0;
}