# Team-Motivation-Project
这是我们团队激励大作业
调试并协作完成程序：
实现学校各专业班级学生信息的管理。10个学生的信息存储在文件studentInit.dat中。定义学生信息的结构体类型，包括：学号、姓名、专业、班级、3门成绩；和符号常量N（学生数）。（同一班级的学生可以属于不同的专业，同一专业的学生可以属于不同的班级）
请同学挑选一个函数进行实现：
(1)定义函数void Input(STU *p, int n)：从文件sutdentInit中输入n个学生的信息。
(2)定义函数void Output(STU *p)：将p所指的某个学生信息表格化屏幕输出。
(3)定义函数STU Fetch(int studentIndex)：从文件中随机读取第studentIndex个(0<= studentIndex <=N-1)学生的信息。
(4)定义函数void Search(STU *p, int classNo, char s, int scoreSum);：实现班级和成绩的综合查找（如1班，总分>240的同学）。
(5)定义函数int Max(STU *p, int scoreIndex)：求所有学生、下标为scoreIndex的课程分数最高的学生序号（在数组中的下标），学生序号作为返回值。
(6)定义函数void Sort_select(STU *p): 对所有学生，按平均成绩由低到高进行简单选择排序。
(7)定义函数void Sort_buble(STU *p, int n);  对某个班级的学生，按平均成绩由高到低进行起泡排序。并调用Output输出。
定义局部变量：
STU stu_class_ave[N]; //按平均成绩排序后的某个班级的学生信息；
int count; //实际元素个数
(8)定义函数void Sort_insert(STU *p, int n, char *major)：对某个专业的学生，按某门课程成绩由低到高进行直接插入排序。并调用Output输出。
定义局部变量：
STU stu_class_ subject [N]; //按某门课程成绩排序后的某个专业的学生信息；
int count; //实际元素个数
(9)定义函数void Save(STU *p,int n) ：将学生信息存入文件。
