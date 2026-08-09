#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int a,b;
    srand(time(0));
    int number = rand()%100+1;
    printf("请分别输入两个数（负数退出）:");
    scanf("%d %d",&a,&b);
    int count = 0;
    while(a>=0 && count < b && a!=number){
        count++;
        if(number>a){
            printf("Too small\n");
        }else if(number < a){
            printf("Too big\n");
        }else{
            break;
        }
        if(count<b){
            printf("请继续输入数字:");
            scanf("%d",&a);
        }
    }
    if(a==number){
        printf("Bingo!\n");
        if(count<=3){
            printf("Lucky You!\n");
        }else{
            printf("Lucky You!\n");
        }
    }else{
        printf("Game Over\n");
    }
    printf("正确答案是%d你猜了%d",number,count);
    return 0;
}