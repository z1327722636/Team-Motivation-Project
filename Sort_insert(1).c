#include "student.h"
extern int start; // 结构体数组的开头
extern int end;   // 结构体数组的结尾
void Sort_insert(STU *p, int n, char *major)
{
    STU stu_class_subject[N + 10];
    STU cmp;
    int temp, i, j;
    int count = 0;
    printf("插入排序后%s专业的该课程成绩由低到高为：\n", major);
    printf("**********************************************************************************************************\n");
    printf("学号\t     姓名\t专业\t\t班级\t语文\t数学\t英语\t\n");
    for (i = 1; i < end; i++)
    {
        cmp = stu[i];
        temp = stu[i].score[n];
        for (j = i - 1; stu[j].score[n] > temp, j >= 0; j--)
        {
            stu[j + 1] = stu[j];
        }
        stu[j + 1] = cmp;
    }
    for (i = 0; i < end; i++, p++)
    {
        if (!strcmp((*p).major, major))
            stu_class_subject[count++] = *p;
    }

    for (i = 0; i < count; i++, p++)
    {
        Output(&stu_class_subject[i]);
    }
    printf("**********************************************************************************************************\n");
}