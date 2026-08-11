#include<stdio.h>
int main(){
    int a,b;
    int min;
    scanf("%d/%d",&a,&b);
    int i;
    int ret=1;
    /*if(a==b){
        printf("1/1");
    }*/
    if(a<b){
        min=a;
    }else{
        min=b;
    }
    for(i=2;i<=min;i++){
        if(a%i==0){
            if(b%i==0){
                ret = i;
            }
        }
    }
    a/=ret;
    b/=ret;
    printf("%d/%d",a,b);
    return 0;
}/*辗转相除法
    int t,x=a,y=b;
    while(y!=0){
    t=x%y;
    x=y;
    y=t;
    }x是最大公约数
    a /= x;
    b /= x*/