#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

int start = 0; // 结构体数组的开头
int end = 10;  // 结构体数组的结尾
// STU stu[N + 10]; // 定义结构体数组
// int mp[100]; // 定义数组，记录某课程最高分的序号

void welcome();

int main()
{
    while (1)
    {
        welcome();
    }
    system("pause");
    return 0;
}

void welcome()
/* 界面*/
{
    char r;
    int i, num;
    int x;
    int n, grade;
    int y;
    char k;
    int p;
    int m;
    char str[15];
    printf("\n  ***********************************************************\n");
    printf("  *                学生信息管理系统                         *\n");
    printf("  ***********************************************************\n\n");
    printf("  *******************系统功能菜单****************************\n");
    printf("     ----------------------   --------------------------------\n");
    printf("     *****************************************************   \n");
    printf("     * 0.写入学生信息到文件里    * *  1.输出全部学生信息   * \n");
    printf("     *****************************************************   \n");
    printf("     * 2.文件中随机读取学生信息  * *  3.班级成绩综合查询   * \n");
    printf("     *****************************************************   \n");
    printf("     * 4.课程最高分成绩查询      * *  5.全体学生平均分查询 * \n");
    printf("     *****************************************************   \n");
    printf("     * 6.班级学生平均分查询      * *  7.专业课程成绩查询   * \n");
    printf("     *****************************************************   \n");
    printf("     * 8.保存学生信息到文件里    * *  9.退出程序           * \n");
    printf("     *****************************************************   \n");
    printf("     ----------------------   ----------------------         \n");
    printf("请选择菜单编号:");
    scanf("%d", &num);
    while (getchar() != '\n')
        ;
    if (num >= 0 && num <= 9)
    {
        switch (num)
        {
        case 0:
            Input(&stu[start], N);
            break;
        case 1:
            printf("全部学生信息如下:\n");
            printf("**********************************************************************************************************\n");
            printf("学号\t     姓名\t专业\t\t班级\t语文\t数学\t英语\t\n");
            for (i = 0; i < end; i++)
            {
                Output(&stu[i]);
            }
            printf("**********************************************************************************************************\n\n\n\n");
            system("pause");
            break;
        case 2:
            printf("请输入需要查询的学生序号:\n");
            scanf("%d", &x);
            Fetch(x);
            printf("\n\n\n");
            system("pause");
            printf("\n\n\n");
            break;
        case 3:
            printf("请输入需要查询的班级n、条件以及班级总分grade:\n");
            scanf("%d %c %d", &n, &k, &grade);
            Search(&stu[start], n, k, grade);
            printf("\n\n\n\n");
            system("pause");
            printf("\n\n\n\n");
            break;
        case 4:
            printf("请输入课程序号（0是语文、1是数学、2是英语）\n");
            scanf("%d", &y);
            printf("该课程最高分的学生序号和姓名为：\n");
            for (i = 0; i < Max(stu, y); i++)
            {
                printf("%d %s\n", mp[i], stu[mp[i]].name);
            }
            printf("\n\n\n\n\n\n");
            break;
        case 5:
            Sort_select(stu);
            printf("\n\n\n\n\n");
            system("pause");
            printf("\n\n\n\n");
            break;
        case 6:
            printf("请输入要查询的班级(1、2):\n");
            scanf("%d", &p);
            Sort_bubble(stu, p);
            printf("\n\n\n");
            system("pause");
            printf("\n\n\n");
            break;
        case 7:
            printf("请输入查询课程（0是语文，1是数学，2是英语）和专业(computer, software, network)\n");
            scanf("%d%s", &m, str);
            Sort_insert(stu, m, str);
            printf("\n\n\n");
            system("pause");
            printf("\n\n\n");
            break;
        case 8:
            Save(stu, end);
            printf("\n\n\n");
            system("pause");
            printf("\n\n\n");
            break;
        case 9:
            printf("即将退出程序!\n");
            exit(0);
        default:
            printf("请在0-12之间选择\n\n\n");
        }
    }
    else
    {
        printf("输入错误，请重新输入");
    }
}