#include<stdio.h>
//正序循环
int main()
{
int x;
int temp = 0;
int a = 0;
int b;
printf("请输入一个数：");
scanf("%d",&x);
temp = x;
/*temp/=10;
a++;*///这里时不要的因为是后面算最大数的时候还要乘以十；
while (temp>0)
{
    temp/=10;
    a++;
}
    b=a;
    int c=1;
    do{
        c=c*10;
        b--;
    }while(b>1);
    do{
       int mask =x/c;
       printf("%d",mask);
       //if//为了格式可以在这里加上if
        x%=c;
        c/=10;
    }while(c>0);
    return 0;
}
//思路没问题就是while的条件有一点没搞好，但是没有看提示自己手搓的，感觉还是可以的
//思路是先输入一个数通过while循环来算几位数，之后再乘以10因为是最大位。while的话记得看好do的条件不然没办法的。加油