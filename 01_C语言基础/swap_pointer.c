#include <stdio.h>

void swap(int *p,int *q)
{
    int c=*p;//定义一个c来存储指针p指向的内容，即a
    *p=*q;//使指针p指向的内容等于指针q指向的内容，即a=b
    *q=c;//使指针q指向的内容等于c，实际上是b=a原来的值
}


int main()
{
    int a=10;
    int b=50;
    int *p=&a,*q=&b;//使指针p指向a，使指针q指向b

     
    printf("a=%d\n",a);//先打印交换前的a和b
    printf("b=%d\n",b);

    swap(p,q);//调用swap函数，swap函数用于交换a和b的值
    printf("After swap,a=%d\n",a);//打印交换后a和b的值
    printf("After swap,b=%d\n",b);

    

    return 0;
}
