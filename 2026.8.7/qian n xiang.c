#include<stdio.h>
int main(){
    int n;//n在这个体系里面可以看成次数
    double sum=0.0;
    int i;
    int sign;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        sum +=sign*1.0/i;
        sign=-sign;
    }
    printf("f(%d)=%f\n", n ,sum);
    return 0;
}

//如果是一加一减可以多一个变量，sign，
//改进:可以直接double sign=1.0;方便乘法；