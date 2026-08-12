//如何写一个程序计算用户输入的数字平均数
#include<stdio.h>
/*int main(){
int x;
double sum =0;
scanf("%d",&x);
int count=0;
while(x!=-1){
    sum+=x;
    count++;
    scanf("%d",&x);
}
if(count++){
    printf("%f",sum/count);
}
return 0;
}*/
//如何写出一个程序计算用户输入的数字平均数，并输出所有大于平均数的数？
int main(){
int x;
int number[100];
double sum =0;
scanf("%d",&x);
int count=0;
while(x!=-1){
    number[count]=x;//把x存进数组第cnt个位置随着程序会一直走因为count++
    sum+=x;
    count++;
    scanf("%d",&x);
}
if(count++){
    printf("%f",sum/count);
    int i;
    for ( i=0; i < count; i++)//count是当“数组长度”，遍历所有存过的数，小于count的原因是数组的下标是从零开始
    {
        if(number[i]>sum/count){//count=2, sum = 300,平均数=150，count只存了两个数，所以i的循环只走两次
                                //i=0: number[0]=100,100<150;
                                //i=1: number[1]=200,200>150;number[i]从第i个位置取出来的数    
            printf("%d\n",number[i]);
        }       
    }
    
}
return 0;
}