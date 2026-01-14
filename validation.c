#include "header.h"
#include <stdio.h>
#include <string.h>

// checking student ID number
int valid_id(char* student_id, Student students[],int count){
	int n =  strlen(student_id);
	if(n!=8){
		return 1;
	}
	for(int i = 0;i<n;i++){
		int Ascii_id = (int)student_id[i];
		if(!((Ascii_id>=48 && Ascii_id<=57) || (Ascii_id>=65 && Ascii_id<=90) || (Ascii_id>=97 && Ascii_id<=122))){
			return 1;
		}
	}
	for(int i =0; i<count; i++){
		if(strcmp(students[i].student_ID,student_id)==0){
			return 1;
		}
	}

	return 0;
}

//checking student name

int valid_name(char* name){
	int n = strlen(name);
	for(int i =0; i<n; i++){
		int Ascii_id = (int)name[i];
		if(!((Ascii_id>=97 && Ascii_id<= 122) || (Ascii_id>=65 && Ascii_id<=90))){
			return 1;
		}
	}
	return 0;
}


//checking student marks

int valid_marks(int marks[5][2]){
	for(int i=0; i<5; i++){
		if(marks[i][0]<0 || marks[i][0] >40){

			return 1;
		}
		if(marks[i][1] <0 || marks[i][1]>60){

			return 1;
		}
	}
	return 0;
}
