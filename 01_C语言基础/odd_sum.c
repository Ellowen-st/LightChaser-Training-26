#include <stdio.h>

int main()
{
    int i,j;
    int sum=0;
    int isPrime=1;//isPrime用于判断是否是素数

    for(i=2;i<=100;i++){        //外层循环for：遍历1~100的数。由于1既不是素数也不是合数，故从2开始循环
        for(j=2;j*j<=i;j++){    //内层循环for：遍历j，用j和i的关系判断i是否是素数。j*j能够减少循环的次数
            if(i%j==0){         //用if语句判断i是不是素数。如果i能被j整除，则i不是素数
                isPrime=0;
            } 
        }

        if(isPrime){            //如果isPrime为真，即i是素数，则if成立
            sum+=i;             //使每一次得到素数，则将素数加起来
        }

        isPrime=1;
    }
    
    printf("1~100内素数的和=%d",sum);  //输出和的值

    return 0;
}
