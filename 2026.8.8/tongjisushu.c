//统计素数并求和
#include<stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int i;
    int j;
     int isPrime=1;
    int sum=0;int count=0;
    for(i=m;i<=n;i++){
        if(i<2)continue;
        isPrime=1;
        for(j=2;j<i;j++){
            if(i%j==0){
                isPrime=0;
                break;
            }
        }
        if(isPrime==1){
        sum+=i;
        count++;
    }
    }
    printf("%d %d",count,sum);
    return 0;
}
