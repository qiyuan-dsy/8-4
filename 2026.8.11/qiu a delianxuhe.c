#include<stdio.h>
int main(){
    int a,n;
    printf("请输入两个整数:");
    scanf("%d %d",&a,&n);
    int sum = 0;
    int i;
    int term=0;
    for(i=1;i<=n;i++){
        term = term * 10 + a;
        sum += term;
    }
    printf("%d",sum);
    return 0;
}