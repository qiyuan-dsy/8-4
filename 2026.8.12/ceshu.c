#include<stdio.h>
int main(){
    int x;
    printf("请输入数量不确定的[0-9]的整数");
    scanf("%d",&x);
    int count[10]={0};
    while(x!=-1){
        if(x!=-1){
            if(x>=0&&x<=9){
                count[x] ++;
            }
        }
        scanf("%d",&x);
    }
    int i;
    for(i=0;i<10;i++){
        printf("%d:%d\n",i,count[i]);
    }
        return 0;
    }
   
