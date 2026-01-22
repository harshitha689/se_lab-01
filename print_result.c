#include "print_result.h"

#include <stdio.h>
#include <string.h>

void print_result(int count, Student students[],FILE *fout){
	float highest = students[0].percentage;
	float lowest = students[0].percentage;
	float sum = 0.0;
	int gradecount[8] = {0};
	for(int i=0; i<count; i++){
		if(students[i].percentage>highest){
			highest = students[i].percentage;
		}
		if(students[i].percentage <lowest){
			lowest = students[i].percentage;
		}
		sum += students[i].percentage;
		if(strcmp(students[i].grade ,"O")==0) gradecount[0]++;
		else if (strcmp(students[i].grade ,"A+")==0) gradecount[1]++;
		else if (strcmp(students[i].grade ,"A")==0) gradecount[2]++;
		else if (strcmp(students[i].grade ,"B+")==0) gradecount[3]++;
		else if (strcmp(students[i].grade , "B")==0) gradecount[4]++;
		else if (strcmp(students[i].grade , "C")==0) gradecount[5]++;
		else if (strcmp(students[i].grade , "D")==0) gradecount[6]++;
		else if (strcmp(students[i].grade ,"F")==0) gradecount[7]++;
		}
	fprintf(fout,"          CLASS PERFORMANCE        \n");
	fprintf(fout,"Highest Percentage       :%.2f\n",highest);
	fprintf(fout,"Lowest Percentage        :%.2f\n",lowest);
	fprintf(fout,"Class Average Percentage :%.2f\n",sum/count);
	fprintf(fout,"\nGrade Distribution:\n");
	fprintf(fout,"O  : %d\n",gradecount[0]);
	fprintf(fout,"A+ : %d\n",gradecount[1]);
	fprintf(fout,"A  : %d\n",gradecount[2]);
	fprintf(fout,"B+ : %d\n",gradecount[3]);
	fprintf(fout,"B  : %d\n",gradecount[4]);
	fprintf(fout,"C  : %d\n",gradecount[5]);
	fprintf(fout,"D  : %d\n",gradecount[6]);
	fprintf(fout,"F  : %d\n",gradecount[7]);
		

	fprintf(fout,"\n         STUDENT WISE DETAILS        \n");
	for(int i =0; i<count; i++){
		fprintf(fout,"\nStudent ID : %s", students[i].student_ID);
		fprintf(fout,"\nName       : %s\n",students[i].name);
		fprintf(fout,"Subject Marks (Minor + Major):\n");
		for(int j =0; j<5; j++){
			int sub_total = students[i].marks[j][0] + students[i].marks[j][1];
			fprintf(fout,"Subject %d : %d + %d = %d\n",j+1, students[i].marks[j][0], students[i].marks[j][1],sub_total);
		}
		fprintf(fout,"Total Marks  : %d / 500\n",students[i].total);
		fprintf(fout,"Percentage   : %.2f\n",students[i].percentage);
		fprintf(fout,"CGPA         : %.2f\n",students[i].cgpa);
		fprintf(fout,"Grade        : %s\n",students[i].grade);
	}
}
