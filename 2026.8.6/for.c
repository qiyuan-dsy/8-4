#include<stdio.h>
int main(){
    //关于阶层//
 /*   int n;

    scanf("%d",&n);
    int fact = 1;

    int i = 1;
    while(i<=n){
        fact *= i;
        i++;
    }
    printf("%d!=%d\n", n, fact);*///用while循环实现阶层的计算//
    //for循环实现阶层的计算//
    int n;
    scanf("%d",&n);
    int fact = 1;

    int i =1;
    for(i=1;i<=n;i++){//for循环实现阶层从一x到n//
        fact *= i;
    }
    /*for(i=n;i>1;i--){
        fact *=i       }*/  //for循环实现阶层从n到一//
    printf("%d!=%d\n", n, fact);
}