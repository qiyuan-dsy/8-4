//之前的不见了再复习一下return
#include<stdio.h>
//有返回值
int add(int a,int b){
    int sum =a+b;
    return sum;//递出sum的值，函数结束
}
//有多个return
int max(int a, int b){
    if(a>b){
        return a;//a大从这里出去
    }else{
        return b;
    }
}
//void没有返回值
void printLine(void){
    printf("---\n");
   }
int main()   //没有return，执行到}自动结束
{
    int result1 = add(3,5);
    printf("3+5=%d\n",result1);

    int result2 = max(10, 20);
    printf("较大的是 %d\n", result2);

    printLine();
    return 0;
}