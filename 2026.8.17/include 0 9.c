#include<stdio.h>
int main(void){
    const int number=10;
    int x;
    scanf("%d",&x);
    int count[number];
    int i;
    for(i=0;i<10;i++){
        count[i]=0;
    }//第一个for是用来做初始化的这样子就不会有垃圾值，因为是要记数字
    while (x!= -1){
        if(x>=0 && x<=9){
            count[x]++;//正好下标也是零到九输入哪一个哪一个下标就可以加上
        }
        scanf("%d",&x);
    }
    for (i=0;i<10; i++){
        printf("%d:%d\n", i , count[i]);
    }
    return 0;
}