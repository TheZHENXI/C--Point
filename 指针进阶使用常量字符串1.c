/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2022-09-11 22:40:54
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-09-11 23:28:40
 * @FilePath: /CCODE/指针进阶/指针进阶使用.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>

int main()
{
    const char* p = "abcdef";//"abcdef"这是一个常量字符串，把首元素的地址存到p
    //*p = 'w'; 常量字符串不能更改
    printf("%c\n",*p);
    printf("%s\n",p);
    return 0;
}