/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2022-09-12 10:52:16
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-09-12 15:51:15
 * @FilePath: /CCODE/指针进阶/数组指针.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>

void Print1(int arr[3][5],int row ,int col)
{
    for(int i =0;i < row; i++)
    {
        for(int j =0 ;j < col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
void Print2(int (*parr)[5],int row,int col)
{
    for(int i = 0;i < row;i++)
    {
        for(int j =0;j < col;j++)
        {
            printf("%d ",*(*(parr+i)+j));
            printf("%d ",(*(parr+i))[j]);
            printf("%d ",parr[i][j]);
        }
        printf("\n");
    }
    
}

int main()
{
    int arr[3][5] ={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
    Print1(arr, 3, 5);
    Print2(arr, 3, 5);
    return 0;
}