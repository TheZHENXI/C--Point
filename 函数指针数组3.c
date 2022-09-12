/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2022-09-12 21:39:27
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-09-12 22:49:31
 * @FilePath: /CCODE/指针进阶/函数指针数组3.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */

#include  <stdio.h>

int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
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
void menu()
{
    printf("********************************\n");
    printf("******1.Add      2.Sub**********\n");
    printf("******3.Mul      4.Div**********\n");
    printf("******0.Exit      **************\n");
    printf("********************************\n");

}

int main()
{
    int input = 0;
    int x = 0;
    int y = 0;
    int (*pArr[5])(int,int) = {0,add,sub,mul,div};
    do
    {
        menu();
        printf("请选择：");
        scanf("%d",&input);
        if(input >=1 && input <=4)
        {
            printf("请输入两个操作数：");
            scanf("%d%d",&x,&y);
            int ret = pArr[input](x,y);
            printf("%d\n",ret);
        }
        else if(input == 0)
        {
            printf("退出\n");
        }
        else
            printf("输入错误\n");
    } while (input);
    
    return 0;
}
// int main()
// {
//     int input = 0;

//     do
//     {
//         menu();
//         printf("请选择：");
//         scanf("%d",&input);
//         int a=0,b=0;
//         switch (input)
//         {
//         case 1:
//             printf("请输入两个操作数：");
//             scanf("%d%d",&a,&b);
//             printf("%d\n",add(a,b));
//             break;
//         case 2:
//             printf("请输入两个操作数：");
//             scanf("%d%d",&a,&b);
//             printf("%d\n",sub(a,b));
//             break;
//         case 3:
//             printf("请输入两个操作数：");
//             scanf("%d%d",&a,&b);
//             printf("%d\n",mul(a,b));
//             break;
//         case 4:
//             printf("请输入两个操作数：");
//             scanf("%d%d",&a,&b);
//             printf("%d\n",div(a,b));
//             break;
//         case 0:
//             break;
//         default:
//             printf("输入错误\n");
//             break;
//         }
//     } while (input);
    
//     return 0;
// }