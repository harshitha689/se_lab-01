#ifndef HEADER_H
#define HEADER_H
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

int valid_id(char * student_id, Student students[], int count);
int valid_name(char* name);
int valid_marks(int marks[5][2]);
void compute_result(Student *s);
void print_result(int count, Student students[],FILE *fout);




#endif
