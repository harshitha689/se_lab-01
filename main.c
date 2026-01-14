#include "header.h"
#include <stdio.h>
#include <string.h>



int main(int argc, char* argv[]){
	if(argc<3){
		printf("Usage: %s <input_file> <output_file>\n",argv[0]);
		return 1;
	}
	FILE* fin = fopen(argv[1],"r");
	FILE* fout = fopen(argv[2],"w");
	if(fin== NULL){
		printf("Error opening the input file\n");
		return 1;
	}
	if(fout == NULL){
		printf("Error opening the output file\n");
		return 1;
	}

	Student students[N];
	int count = 0;
	char id[9];
	char name[60];
	int marks[5][2];
	while(fscanf(fin,"%s %s",id,name)!=EOF){
		for(int i =0; i<5; i++){
			fscanf(fin,"%d %d",&marks[i][0],&marks[i][1]);
		}
		if(valid_id(id,students,count)==1){
			fprintf(fout,"Invalid or duplicate student ID\n");
			continue;
		}
		if(valid_name(name)==1){
			fprintf(fout,"Invalid Name\n");
			continue;
		}
		if(valid_marks(marks)==1){
			fprintf(fout,"Invalid marks\n");
			continue;
		}
		strcpy(students[count].student_ID, id);
    		strcpy(students[count].name, name);

    		for (int i = 0; i < 5; i++) {
        	students[count].marks[i][0] = marks[i][0];
        	students[count].marks[i][1] = marks[i][1];
    		}
		compute_result(&students[count]);
		count++;
	}
	fclose(fin);
	print_result(count,students,fout);
	fclose(fout);
	return 0;

}
	
