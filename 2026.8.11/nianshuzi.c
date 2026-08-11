#include<stdio.h>//主要是switch和break;用到了之前正，序输出的方法
int main(){
    int a;
    printf("请输入整数：");
    scanf("%d",&a);
    //首先解决负数的问题；
    if(a<0){
        printf(" fu ");
        a=-a;
    }
    int b=a;
    int count=1;
    while(a>10){
        a/=10;
        count*=10;
    }
    while(count>0){//数位做条件，表示的是到哪一个位置所以。拿b来做就是遇到零就退出了。
        int mask=b/count;
          b%=count;
        count/=10;
        switch (mask)
        {
        case 0:printf("ling");break;
        case 1:printf("yi");break;
        case 2:printf("er");break;
        case 3:printf("san");break;
        case 4:printf("si");break;
        case 5:printf("wu");break;
        case 6:printf("liu");break;
        case 7:printf("qi");break;
        case 8:printf("ba");break;
        case 9:printf("jiu");break;
        default:
            break;
        }
        if(count>0){
            printf(" ");
        }
    }
    return 0;
}