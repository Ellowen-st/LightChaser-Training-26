#include <stdio.h>

int main()
{
    int a=0,b=0;

    scanf("%d %d",&a,&b);  //输入计算双方
    
    printf("a+b=%d\n",a+b); //加法运算
    printf("a-b=%d\n",a-b);//减法运算
    printf("a*b=%d\n",a*b);//乘法运算

    if(b!=0){
        printf("a/b=%f\n",1.0*a/b);    //除法计算，商可能不是整数.
    }else{
        printf("b=0，除数不能为零");       //当除数为0时进行提示
    }

    
    return 0;
}
