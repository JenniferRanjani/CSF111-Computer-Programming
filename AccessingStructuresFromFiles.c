#include <stdio.h>
    struct student {
    	char Id[20];
        char Name[20];
        float cgpa;
    };
    int main() {
    	struct student stud_src[5],stud_dest[5];
    	FILE *fptr;
    	int i;
    	fptr=fopen("file.txt","w");
    	for (i=0;i<2;++i) {
    	
    		printf("Enter ID: ");
    		scanf("%[^\n]%*c",stud_src[i].Id);
    		printf("Enter Name: ");
    	    scanf("%[^\n]%*c",stud_src[i].Name);
    		printf("Enter CGPA: ");
    		scanf("%f",&stud_src[i].cgpa);
    		getchar();
        	fflush(stdin);
    	}
    	fwrite(stud_src,sizeof(stud_src),1,fptr);
    	fclose(fptr);
    	fptr=fopen("file.txt","r");
    	fread(stud_dest,sizeof(stud_dest),1,fptr);
    	for (i=0;i<2;++i) {
    		printf("\nID: %s Name: %s CGPA: %f",stud_dest[i].Id, stud_dest[i].Name,stud_dest[i].cgpa);
    	}
    	fclose(fptr);
    }
