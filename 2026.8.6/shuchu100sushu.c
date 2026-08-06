//输出100以内的素数//
#include<stdio.h>
    int main()
    {
        int x = 2;
        //for( x=2; x<100; x++){//用来输出0-100中的素数//
        int count = 0;
        while(count<50){//用while循环来输出前五十的素数//
        int i;
        int isPrime=1;
        for( i=2; i<x; i++){
            if(x%i==0){
                isPrime=0;
                break;
            }
        } 
        if(isPrime==1){
            printf(" %d",x);
            count++;
        }
        x++;
    }//}//break已经发挥了作用，但外层还有一个break，所以继续循环，直到x<100为止//
        printf("\n");
        return 0;
    }
//思路：0，1不是素数所以要从2开始i++的作用是来验证是不是素数，x++是验证完一个数之后，继续验证下一个数，刚才是有一点混淆了。


