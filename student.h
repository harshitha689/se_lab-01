#ifndef STUDENT_H
#define STUDENT_H
#include <stdio.h>
#define N 100

typedef struct{
	char student_ID[9];
	char name[60];
	int marks[5][2];
	char grade[3];
	float cgpa;
	float percentage;
	int total;

}Student;


#endif
