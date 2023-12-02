#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

int start = 0;   // 结构体数组的开头
int end = 10;    // 结构体数组的结尾
STU stu[N + 10]; // 定义结构体数组
int mp[100];     // 定义数组，记录某课程最高分的序号

void welcome();

void main()
{
    int choose;
    char num, r;
    int i;
    int x;
    int n, grade;
    int y;
    char k;
    int p;
    int m;
    char str[15];
    while (1)
    {
        printf("\n——————————————————————————————————————————\n");
        printf("|/          # 已经进入  大连海事大学--学生信息管理系统 #      //\n");
        printf("———————————————————————————————————————————\n");
        printf("|///#No.0  ---- 输入学生个人信息                            ---- \n");
        printf("|///#No.1  ---- 输出学生个人信息                            ---- \n");
        printf("|///#No.2  ---- 保存学生信息                                ---- \n");
        printf("|///#No.3  ---- 读取学生信息                                ---- \n");
        printf("|///#No.4  ---- 输出某门课程的最高分和分数最高的学生的姓名  ----\n");
        printf("|///#No.5  ---- 对某专业的学生按总平均成绩进行简单选择排序  ---- \n"); /*MOU 专业*/
        printf("|///#No.6  ---- 按平均成绩对某班学生进行冒泡排序            ---- \n");
        printf("|///#No.7  ---- 对某班学生按某门课程成绩进行直接插入排序    ---- \n"); /*班级*/
        printf("|///#No.8  ---- 按照班级和成绩的查找某位学生信息            ---- \n");
        printf("\n **注意：若是输入其他数字直接退出系统//**\n");
        printf("———————————————————————————————————————————\n");
        printf("请输入选择的功能编号：");

        scanf("%d", &choose);
        switch (choose)
        {
        case 0:
            Input(&stu[start], N);
            Ask();
            break;
        case 1:
            printf("全部学生信息如下:\n");
            printf("**********************************************************************************************************\n");
            printf("学号\t     姓名\t专业\t\t班级\t语文\t数学\t英语\t\n");
            for (i = 0; i < end; i++)
            {
                // Output(&stu[i]);
            }
            printf("**********************************************************************************************************\n\n\n\n");
            system("pause");
            Ask();
            break;
        case 2:
            printf("请输入需要查询的学生序号:\n");
            scanf("%d", &x);
            // Fetch(x);
            printf("\n\n\n");
            system("pause");
            printf("\n\n\n");
            Ask();
            break;
        case 3:
            printf("请输入需要查询的班级n、条件以及班级总分grade:\n");
            scanf("%d %c %d", &n, &k, &grade);
            // Search(&stu[start], n, k, grade);
            printf("\n\n\n\n");
            system("pause");
            printf("\n\n\n\n");
            Ask();
            break;
        case 4:
            printf("请输入课程序号（0是语文、1是数学、2是英语）\n");
            scanf("%d", &y);
            printf("该课程最高分的学生序号和姓名为：\n");
            int max;
            // max = Max(stu, y);
            for (i = 0; i < max; i++)
            {
                printf("%d %s\n", mp[i], stu[mp[i]].name);
            }
            printf("\n\n\n\n\n\n");
            Ask();
            break;
        case 5:
            // Sort_select(stu);
            printf("\n\n\n\n\n");
            system("pause");
            printf("\n\n\n\n");
            Ask();
            break;
        case 6:
            printf("请输入要查询的班级(1、2):\n");
            scanf("%d", &p);
            // Sort_bubble(stu, p);
            printf("\n\n\n");
            system("pause");
            printf("\n\n\n");
            Ask();
            break;
        case 7:
            printf("请输入查询课程（0是语文，1是数学，2是英语）和专业(computer, software, network)\n");
            scanf("%d%s", &m, str);
            // Sort_insert(stu, m, str);
            printf("\n\n\n");
            system("pause");
            printf("\n\n\n");
            Ask();
            break;
        case 8:
            // Save(stu, end);
            printf("\n\n\n");
            system("pause");
            printf("\n\n\n");
            Ask();
            break;

        default:
            printf("退出系统\n");
        }
        if ((choose < 1) || (choose > 10))
            break;
    }
}

void Ask()
{
    int c;
    printf("\n已实现所选功能 输出编号进行下一步操作：\n\n  1： 继续选择其他功能  2： 不再选择直接退出系统\n");
    scanf("%d", &c);
    if (c == 2)
        exit(0);
}