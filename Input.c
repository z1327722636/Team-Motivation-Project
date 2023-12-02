#include "student.h"

void Input(STU *p, int n)
{
    FILE *fp;
    STU *q = p;
    int i;
    char *filename = "studentInit.dat";
    for (i = 0; i < n; i++)
    {
        printf("请输入第%d个学生的信息：\n", i + 1);
        printf("学号：");
        scanf("%s", p->num);
        printf("姓名：");
        scanf("%s", p->name);
        printf("专业(computer, software, network)：");
        scanf("%s", p->major);
        printf("班级(1或2)：");
        scanf("%d", &p->classNo);
        printf("课程1成绩：");
        scanf("%d", &p->score[0]);
        printf("课程2成绩：");
        scanf("%d", &p->score[1]);
        printf("课程3成绩：");
        scanf("%d", &p->score[2]);
        p++;
    }
    p = q;

    if ((fp = fopen(filename, "wb")) == NULL)
    {
        printf("cannot open file\n");
        exit(0);
    }
    for (i = 0; i < n; i++)
    {
        if (fwrite(p, sizeof(&p), 1, fp) != 1)
            printf("file write error\n");
        p++;
    }
    p = q;
    fclose(fp);
}
