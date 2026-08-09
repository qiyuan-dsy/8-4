#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int a;
    int b;
    srand(time(0));
    int number=rand()%100+1;
    printf("请分别输入两个数(输入负数退出程序)：");
    scanf("%d %d",&a,&b);
    int count=1;
    do {
        if(number>a){
            printf("Too big\n");
             printf("请继续输入数字");
             scanf("%d",&a);
            count++;
        }else if(number<a){
            printf("Too small\n");
             printf("请继续输入数字");
             scanf("%d",&a);
            count++;
        }else if(number==a){
            break;
        } }while(count<=b );
         printf("%d\n",number);
    
         int ds=count;
        if(ds>=2&&ds<=3){
            printf("Lucky You\n");
        }else if(ds>=4&&ds<=b){
                printf("Good Guess\n");
        }else if(ds>b);{
            printf("Game Over\n");
        }
        return 0;           
        };
    
    
