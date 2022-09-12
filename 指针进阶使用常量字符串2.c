/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2022-09-11 23:04:25
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-09-11 23:30:47
 * @FilePath: /CCODE/指针进阶/指针进阶使用(常量字符串2).c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>

int main()
{
    char arr1[] = "abcedf";
    char arr2[] = "abcedf";
    char* p1 = "abcedf";
    char* p2 = "abcedf";
    if(p1 == p2)
    {
        printf("haha\n");
    }
    else
    {
        printf("hehe\n");
    }
    return 0;
}