// student.h
#ifndef STUDENT_H
#define STUDENT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10

struct Student
{
    char num[15];   // 学号
    char name[15];  // 姓名
    char major[10]; // 专业（computer, software, network）
    int classNo;    // 班级（1-2）
    int score[3];   // 3门课的成绩（0-2）
    double aver;    // 3门课平均成绩
};

typedef struct Student STU;

#endif // STUDENT_H
