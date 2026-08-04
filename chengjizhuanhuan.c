#include<stdio.h>
int main(){
    //拓展加上循环//
    int score = 0;
    //while(1)表示条件永远为真，程序会无限循环打括里面的内容//
    while (1){
    printf("请输入一个成绩(输入-1直接退出程序): ");
    scanf("%d",&score);
    if(score==-1){
        printf("程序已退出。\n");
        break;
    }
    
    if(score>=90&&score<=100){
        printf("A");
    }else if(score>=80&&score<90){
        printf("B");
    }else if(score>=70&&score<80){
        printf("C");
    }else if(score>=60&&score<70){
        printf("D");
    }else{
        printf("不合格");
    }
    
 }
   return 0;
}
