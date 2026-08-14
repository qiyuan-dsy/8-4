#include<stdio.h>
/*int main(){
    int i;
    int sum=0;
    for(i=1;i<=10;i++){
        sum+=i;
    }
    printf("%d到%d的和是%d\n",1,10,sum);
    for(i=20;i<=10;i++){
        sum+=i;
    }
    printf("%d到%d的和是%d\n",20,30,sum);
    for(i=35;i<=45;i++){
        sum+=i;
    }
    printf("%d到%d的和是%d\n",35,45,sum);
    return 0;
}*/
void sum(int begin,int end)
{
    int i;
    int sum =0;
    for( i=begin; i<=end; i++){
        sum+=i;
    }
    printf("%d到%d的和是%d\n, begin, end, sum");
}

int main()
{
    sum(1,10);
    sum(20,30);
    sum(35,45);

    return 0;
}