#include "student.h"

extern int start; // 结构体数组的开头
extern int end;	  // 结构体数组的结尾
void Sort_bubble(STU *p, int n)
{
	STU stu_class_ave[N + 10];
	int count = 0;
	int i, j;
	for (i = 0; i < end; i++, p++)
		stu[i].aver = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3;
	printf("%d班里总成绩通过冒泡排序由高到低的学生成绩为:\n", n);
	printf("**********************************************************************************************************\n");
	printf("学号\t     姓名\t专业\t\t班级\t语文\t数学\t英语\t\n");
	for (i = 0; i < end - 1; i++)
	{
		for (j = 0; j < end - i - 1; j++)
		{
			if (stu[j].aver < stu[j + 1].aver)
			{
				STU s = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = s;
			}
		}
	}
	for (i = 0; i < end; i++)
	{
		if (stu[i].classNo == n)
			stu_class_ave[count++] = stu[i];
	}
	for (i = 0; i < count; i++)
	{
		Output(&stu_class_ave[i]);
	}
	printf("**********************************************************************************************************\n");
}