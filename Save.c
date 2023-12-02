#include "student.h"
void Save(STU *p, int n)
{
    FILE *fp;
    int i;
    if ((fp = fopen("studentInit.dat", "wb")) == NULL)
    { // 打开文件  wb是写入二进制文件 给他一个权限
        printf("cannot open file\n");
        exit(0);
    }
    for (i = 0; i < n; i++)
    {
        if ((fwrite(&stu[i], sizeof(STU), 1, fp)) != 1)
        {
            printf("file write error\n");
        }
    }
    fclose(fp);
    printf("所有学生信息已经成功保存到文件里面!!!\n\n");
}
