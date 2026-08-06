//用一角，两角，五角来凑十块以下的钱；//定义一个新的变量Exit在已经完成第一个任务过后目的是只给出一种可行的方案
    #include<stdio.h>
    int main()
    {
    int x;
    int one , two , five ;
    int exit = 0;
    printf("请输入多少钱:",x);
        scanf("%d",&x);   
        for(one=0;one<x*10;one++)
        {
            for(two=0;two<x*10/2;two++)
            {
                for(five=0;five<x*10/5;five++)
                    {
                        if(one+two*2+five*5==x*10){
                            printf("可以用%d个一角，%d个两角，%d个五角来凑%d元\n",one,two,five,x);
                            exit =1;
                            break;
                            //goto out;
                        }
                    }
                if(exit==1) break;
            }
            if(exit==1) break;
        }
        //out:
        return 0;
    }




    /*思路：一角的个数从0开始，直到x*10为止；                                   
    两角的个数从0开始，直到x*10/2为止；
    五角的个数从0开始，直到x*10/5为止；
    然后判断一角、两角、五角的总和是否等于x*10，如果等于，就输出结果。
    2.尽量变成整数来计算，避免浮点数的误差。*/
    /* 接力break的方法设置一exit全部跳出*/
    /*3.直接用goto */