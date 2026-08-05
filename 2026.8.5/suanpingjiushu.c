#include<stdio.h>
/*算平均数：
变量：一个记录读到整数的变量
2.平均数怎么算
3.将每次输入的数字加起来
4.一个变量记录累加的结果，一个变量记录读到的数的个数*/

int main(){
       int number;
       int sum = 0;
       int count = 0;
    do {
       scanf("%d",&number);//读number。
            if (number!=-1)
            {
               sum = sum+number;
               count++; //建议sum += number
            }
        }while( number!=-1);
        printf("%f\n", 1.0*sum/count);//浮点数计算*0.1，并且%f


       return 0;
}