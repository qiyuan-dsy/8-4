#include<stdio.h>
int main()
{
    int x;
    double sum =0;
    int cnt=0;
    int number[100];
    scanf("%d",&x);
    while (x!=-1){
        number[cnt]=x;
        sum+=x;
        cnt++;
        scanf("%d",&x);
    }
    if(cnt>0){
        printf("%f\n", sum/cnt);
        int i=0;
        for(;i<cnt;i++){
            if ( number[i]>sum/cnt){
                printf("%d",number[i]);
            }
        }
    }
    return 0;
}//存入的不同方法for(int i=0; i<5 ;i++){
//                  scanf("%d", &x);
//                  number[i]=x;//直接用i存入
//}