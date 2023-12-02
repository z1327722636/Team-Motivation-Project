#include"student.h"
Student Fetch(int studentIndex) {
    FILE *file;
    Student student;

    // 打开文件
    file = fopen("studentInit.dat", "rb");
    if (file == NULL) {
        printf("无法打开文件。\n");
        exit(1);
    }

    // 定位到指定学生的位置
    fseek(file, studentIndex * sizeof(Student), SEEK_SET);

    // 读取学生信息
    fread(&student, sizeof(Student), 1, file);

    // 关闭文件
    fclose(file);

    return student;
}
