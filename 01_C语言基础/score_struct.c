#include <stdio.h>

struct score{
    char name[20];     //数组name储存字符串
    double score;      //定义double类型的变量score来代表成绩
};

int main()
{
    struct score list;   //结构体的变量名为list
    printf("请输入你的名字...\n");
    scanf("%s",list.name);      //输入名字
    printf("请输入你的成绩...\n");
    scanf("%lf",&list.score);   //输入成绩
    
    printf("姓名:%s\n成绩:%lf",list.name,list.score);    //输出成绩单

    return 0;
}
