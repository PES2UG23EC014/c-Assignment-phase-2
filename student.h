/*student.h: The Header File*/


#ifndef STUDENT_H
#define STUDENT_H

struct Student 
{
    char name[50];
    float exam1_marks[10];
    float exam2_marks[10];
    int num_subjects; 
    int num_subjects_exam2; 
};

void inputStudentData(struct Student *student);
void generateGradeCard(struct Student *student);

#endif
