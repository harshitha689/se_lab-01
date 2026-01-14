#include "header.h"
#include <stdio.h>
#include <string.h>
void compute_result(Student *s){
	s->total = 0;
	int sub_total;
	for(int i=0; i<5; i++){
		sub_total = s->marks[i][0] + s->marks[i][1];
		if(sub_total < 50){
			s->marks[i][0] =0;
			s->marks[i][1] =0;
			sub_total = 0;
		}
		 s->total += sub_total;
	}
	s->percentage = (s->total/500.0)*100;
	if(s->percentage >= 90) strcpy(s->grade,"O");
	else if(s->percentage >=85) strcpy(s->grade,"A+");
	else if(s->percentage >=75) strcpy(s->grade,"A");
	else if(s->percentage >=65) strcpy(s->grade,"B+");
	else if(s->percentage >=60) strcpy(s->grade,"B");
	else if(s->percentage >=55) strcpy(s->grade,"C");
	else if(s->percentage >=50) strcpy(s->grade,"D");
	
	else strcpy(s->grade,"F");
	s->cgpa = s->percentage/10;
}
