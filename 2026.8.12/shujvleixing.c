#include<stdio.h>
int main(){
    int a =0;
    a=6;
    printf("sizeof(int)=%ld\n", sizeof(int));
    printf("sizeof(a)=%ld\n", sizeof(a));
    return 0;
    //不要sizeof里面做运算，是静态的。
    //先学数组
}