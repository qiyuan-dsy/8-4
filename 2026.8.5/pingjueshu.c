#include<stdio.h>
int main(){
    int number;
    int sum = 0;
    int count= 0;
    printf("请输入数字: ",number);
    scanf("%d",&number);
    while (number != -1)
    {
        sum += number;
        count++;
        printf("请继续输入数字：",number);
        scanf("%d",&number);
    }
    printf("%f",0.1*sum/count);
    return 0;
}