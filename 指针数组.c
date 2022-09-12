/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2022-09-11 23:32:13
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-09-12 09:45:27
 * @FilePath: /CCODE/指针进阶/指针数组.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>

int main()
{
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {2,3,4,5,6};
    int arr3[] = {3,4,5,6,7};
    int* p[] = {arr1,arr2,arr3};
    for(int i =0;i < 3;++i)
    {
        int j = 0;
        for(j = 0;j < 5;j++)
        {
            printf("%d ",*(p[i]+j));
        }
        printf("\n");
    }
    return 0;
}