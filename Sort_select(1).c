#include "student.h"
extern int start; // 结构体数组的开头
extern int end;	  // 结构体数组的结尾
void Sort_select(STU *p)
{
	int i = 0;
	int j;
	for (i = 0; i < end; i++, p++)
		stu[i].aver = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3;
	for (i = 0; i < end - 1; i++)
	{
		int k = i;
		for (j = i + 1; j < end; j++)
		{
			if ((*(p + k)).aver > (*(p + j)).aver)
			{
				STU s = (*(p + k));
				(*(p + k)) = (*(p + j));
				(*(p + j)) = s;
			}
		}
	}
	printf("����ѧ����ƽ���ɼ��ӵ͵���ѡ�������Ľ����\n");
	for (i = 0; i < end; i++)
	{
		printf("%s\t%.2lf\t\n", stu[i].name, stu[i].aver);
	}
}
