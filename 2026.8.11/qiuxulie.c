#include<stdio.h>
int main(){
    int a;
    printf("请输入一个项数:");
    scanf("%d",&a);
    int f;
    double b;
    double c;
    double d=0.0;
    int t;
    b=1;
     c=2;
    for(f=1;f<=a;f++){
         d+=c/b;
         t=c;
         c=c+b;
         b=t;
    }
    printf("%.2f\n",d);
    return 0;
}