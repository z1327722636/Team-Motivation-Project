#include "student.h"

void Output(STU *p)
{
    printf("%s\t%8s\t%8s\t%d\t%d\t%d\t%d\t\n", p->num, p->name, p->major, p->classNo, p->score[0], p->score[1], p->score[2]);
}