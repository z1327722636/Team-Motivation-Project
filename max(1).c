#include "student.h"
extern int start; // 结构体数组的开头
extern int end;   // 结构体数组的结尾

int Max(STU *p, int scoreIndex)
{
    int maxx = 0;
    int i, j = 0;
    memset(mp, 0, sizeof(mp)); // 将数组mp初始化
    for (i = 0; i < end; i++, p++)
    {
        if ((*p).score[scoreIndex] >= maxx)
        {
            maxx = (*p).score[scoreIndex];
        }
    }
    for (i = 0; i < end; i++)
    {
        if (stu[i].score[scoreIndex] == maxx)
        {
            mp[j++] = i;
        }
    }
    return j;
}
