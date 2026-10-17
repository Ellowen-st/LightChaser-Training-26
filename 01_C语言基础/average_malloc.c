#include <stdio.h>
#include <stdlib.h>

int main()
{
    double *a=NULL;//定义一个double类型的空指针
    int n=0,i=0;//n为所需数字的个数；i是数组元素的个数，用于作数组下标
    double sum=0;//定义一个double类型的sum，sum是输入数字相加总和的意思

    do{
        printf("请输入需要的数字的个数n(n>0)...\n");
        scanf("%d",&n);//输入所需数字个数
    }while(n<=0);//判断个数是否大于0，若小于等于0则重输

    a=(double*)malloc(n*sizeof(double));//为空指针a申请内存

    for(i=0;i<n;i++){              //从a[0]开始输入数字
        printf("请输入数字...\n");
        scanf("%lf",&a[i]);//输入数字
        sum+=a[i];
    }

    printf("这些数字的平均值=%lf",sum/n);//输出所有数字的平均值

    free(a);//返回内存，将指针重新变成空指针
    a=NULL;

    return 0;
}
