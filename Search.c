#include "student.h"
extern int start; // 结构体数组的开头
extern int end;	  // 结构体数组的结尾
void Search(STU *p, int classNo, char s, int scoreSum)
{
	int i, j;
	if (s == '>')
	{
		printf("%d班里总分大于%d分的学生有：\n", classNo, scoreSum);
		for (i = 0; i < end; p++, i++)
		{
			if ((*p).classNo == classNo)
			{
				int sum = 0;
				for (j = 0; j <= 2; j++)
					sum += (*p).score[j];
				if (sum >= scoreSum)
				{
					printf("%s\t其总分为：%d\n", (*p).name, sum);
				}
			}
		}
	}
	else if (s == '<')
	{
		printf("%d班里总分小于%d分的学生有：\n", classNo, scoreSum);
		for (i = 0; i < end; p++, i++)
		{
			if ((*p).classNo == classNo)
			{
				int sum = 0;
				for (j = 0; j <= 2; j++)
					sum += (*p).score[j];
				if (sum <= scoreSum)
				{
					printf("%s\t其总分为：%d\n", (*p).name, sum);
				}
			}
		}
	}
	else
		printf("输入条件错误。\n");
}