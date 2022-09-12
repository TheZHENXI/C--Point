/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2022-09-12 17:31:24
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-09-12 17:38:20
 * @FilePath: /CCODE/指针进阶/函数指针数组.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include  <stdio.h>
int add(int a,int b)
{
    return a+b;
}
int del(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
int div(int a,int b)
{
    return a/b;
}
int main()
{
    int (*p[4]) (int,int) = {add,del,mul,div};
    for(int i =0;i<4;i++)
    {
        printf("%d ",p[i](2,3));
    }
    return 0;
}