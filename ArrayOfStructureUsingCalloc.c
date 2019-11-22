#include <stdio.h>
#include <stdlib.h>
struct student{
    char Id[20];
    char Name[20];
    float cgpa;
};

int main()
{

struct student *p;

p = calloc(2,sizeof(struct student));

for(int i = 0;i<2;i++){
scanf("%[^,]%*c%[^,]%*c%f",p[i].Id,p[i].Name,&p[i].cgpa);
getchar();
}

for(int i = 0;i<2;i++)
printf("\n The record%d is %s %s %f",i+1,p[i].Id,p[i].Name,p[i].cgpa);
    
}

