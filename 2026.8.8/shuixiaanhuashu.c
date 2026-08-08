#include<stdio.h>//这道题是水仙花数，指的是一个n位正整数（N>=3），它的每个位上的数字的N次幂之和等于它的本身。例如: 153=1³+5³+3³
#include<math.h>
int main(){
    int a;
    int c;
    printf("请输入一个大于等于与三小于等于7的正整数：");
    scanf("%d",&a);
    c=a;
    int wei=1;
    while (a>0)
    {
         wei*=10;
         a--;

    }
    int i;
    for(i=wei/10;i<wei;i++){//问题所在起点没有打对应该是wei/0，后面也有问题我开始打的只适合三位数；
        int temp=i;
        int sum=0;
        while (temp>0)
        {
            int h=temp%10;
            sum+=(int)(pow(h,c)+0.5);
            temp/=10;
        }
        
        if(i==sum){
                printf("%d ",i);
        }
    }
    return 0;
}