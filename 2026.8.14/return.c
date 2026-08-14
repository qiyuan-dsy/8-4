#include<stdio.h>
int check(int x){
    if(x>0){return 1;}
    if(x<0){return -1;}//不用printf因为check拿不到值所以底下的东西没有办法去存；
    return 0;
}
int main(){
            int result = check(5);
            printf("%d\n", result);

            printf("%d\n", check(-3));
}