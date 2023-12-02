#include "student.h"
STU Fetch(int studentIndex)
{
    FILE *fp;
    if ((fp = fopen("studentInit.dat", "rb")) == NULL)
    {
        printf("can not open file\n");
        exit(0);
    }
    printf("第%d个学生的基本信息与成绩:\n", studentIndex);
    fseek(fp, studentIndex * sizeof(STU), 0);      // 移动文件位置标记，从头开始
    fread(&stu[studentIndex], sizeof(STU), 1, fp); // 读一个数据块到数据块里
    printf("%s\t%8s\t%8s\t%d\t%d\t%d\t%d\t\n", stu[studentIndex].num, stu[studentIndex].name, stu[studentIndex].major, stu[studentIndex].classNo, stu[studentIndex].score[0], stu[studentIndex].score[1], stu[studentIndex].score[2]);
}
