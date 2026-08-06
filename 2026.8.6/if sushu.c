#include<stdio.h>
int main()
{
    int a;
    printf("请输入一个整数");
    scanf("%d",&a);
    int i;
    int isPrime=1;
    for( i=2; i<a; i++){
        if(a%i==0){
            isPrime=0;
            break;//如果a能被i整除，则说明a不是素数，isPrime置为0，并跳出循环//
        }
    } 
    if(isPrime==1){
        printf("这个数是素数\n");
    }else{
        printf("这个数是不是素数\n");
    }
    return 0;
}