#include<stdio.h>//求最大公约数
int main()
{
int a,b;
int min;
int i;
int ret=0;
scanf("%d %d", &a, &b);
if(a<b){
    min = a;
}else{
    min = b;
}
for(i=1;i < min;i++){
    if( a%i == 0){
        if ( b%i == 0){
                ret = i;
        }
    }
}
printf("%d和%d的最大公约数是%d.\n", a, b, ret);
}//解答为什么循环那么多次但是最终值只有一个呢：因为ret = i;因为是从1往上找的，所以越往后公约数越大，正好最小就是加一个break；