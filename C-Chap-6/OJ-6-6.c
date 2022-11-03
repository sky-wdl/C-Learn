//
// Created by Dongliu_Wen on 2022/10/31.
//
/*
 *完全数
【问题描述】

一个整数，如果其所有小于它本身的因子（包括1）之和正好等于该数，则称其为"完全数"。编写程序计算某一范围内的所有"完全数"。

【输入形式】

从控制台输入数据范围的下限m和上限n，m和n都为整数，且1<=m<=n<=10000，m和n之间用一个空格分割。

【输出形式】

向控制台输出m和n之间的所有"完全数"（包括m和n本身），所有输出的数据以从小到大的顺序显示在一行上，各数之间以一个空格分割。若该范围内没有完全数，则输出字符串No Answer。

【样例1输入】

1 100
【样例1输出】

6 28
【样例1说明】

在1到100之间，因为只有：6=1+2+3，28=1+2+4+7+14，满足完全数的要求，所以输出6和28，它们中间以一个空格分割。

【样例2输入】

100 200
【样例2输出】

No Answer
【样例2说明】

在100到200之间，因为没有完全数，所以输出No Answer。
 */

#include <stdio.h>

int perfectNumber(int number);
int main()
{
    int start,end,state=0;
    scanf("%d%d",&start,&end);
    while(start<=end)
    {
        if(perfectNumber(start))
        {
            printf("%d ",start);
            state=1;
        }
        start++;
    }
    if(state==0)
        printf("No Answer");

    return 0;
}

int perfectNumber(int number)
{
    int i=0,state;
    for (int j = 1; j < number; ++j) {
        if(number%j==0)
            i+=j;
    }
    if (i==number)
        state=1;
    else
        state=0;

    return state;
}