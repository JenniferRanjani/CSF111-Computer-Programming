/*Write a program to accept an English sentence and an English word from the user, 
and then to check whether the word exists in the sentence or not. 
If it occurs, the program should print out how many times the word occurs in the 
sentence and then remove all the occurrences of the word from the sentence.*/

#include<stdio.h>
#include<string.h>

int stringcomp(char* t1,char* s1)
{
for(int i=0;i<strlen(s1);++i)
if(s1[i]!=t1[i])
return 0;
else 
return 1;
}
void main()
{
int counter=0;
char s[30],s2[30],s1[10];
printf("\nenter the string ");
scanf("%[^\n]%*c",s);
printf("\nenter the substring ");
scanf("%s",s1);
printf("\n The string is %s and search string is %s",s,s1);

char *p2=strtok(s," ");

while(p2!=NULL)
{
if(stringcomp(p2,s1))
counter++;
else
{
strcat(s2,p2);
strcat(s2," ");
}
p2=strtok(NULL," ");}

printf("\n The keyword has occurred %d times and the new string is %s",counter,s2);

}
