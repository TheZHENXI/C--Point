/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2022-09-12 15:52:04
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-09-12 17:30:09
 * @FilePath: /CCODE/指针进阶/函数指针1.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>

int main()
{
    (  *(  void(*)()  )0  )  ();
    //把0进行强制类型转换为函数指针，该指针指向一个无参，
    //返回类型为void的函数,也就是说0 成为了地址；
    //然后调用地址为0的该函数;
    //总的来说这是一次函数的调用
    void (*    signal( int , void (*)(int) )    ) (int);
    //signal是一个函数声明
    //signal函数有两个参数一个int类型，一个函数指针，该指针指向的函数参数为int，返回类型为void
    //signal函数的返回类型也是函数指针类型：该指针指向的函数的参数类型为int，返回类型为void
    return 0;
}