#include<stdio.h>
int main(){
    int a;int b;
    printf("请输入一个大于等于3小于等于7的数字：");
    scanf("%d",&a);
    b=a;
    int wei=1;
    while(a>0){
        wei*=10;
        a--;
    };
    int i; 
   
    for(i=wei/10;i<wei;i++){
        int temp=i;
        int sum=0;//换新的数字总和要清零
        while (temp>0)
        {
            int power=temp%10;
            int p=1;
            for(int q=0;q<b;q++){
                p=p*power;
            }
           sum +=p;
        temp/=10;    
        }
       if(i==sum){
            printf("%d\n",i);
       }
    }
return 0;


}
