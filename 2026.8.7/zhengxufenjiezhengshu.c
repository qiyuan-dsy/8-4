#include<stdio.h>
//先是倒倒为正
int main(){
    int x;
    int i;
    int t=0;
    printf("请输入一个正整数:");
    scanf("%d",&x);
    do{
        i=x%10;
        t=t*10+i;
        x/=10;
    }while(x>0);
    int b=0;
   do{
    int a=0;
    a=t%10;
   // b=b*10 + a;//整数变量第二循环不用再打
     printf("%d",a);
    if(t>9){
    printf(" ");
   }
    t/=10;
   }while(t>0);
   return 0;

}//该做法十分复杂并且末尾是0出不来。
