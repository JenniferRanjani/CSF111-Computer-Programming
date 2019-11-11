# include <stdio.h>
# include<string.h>
int main ()
{
char string[50];
printf("Enter the string\n");
fgets(string,50,stdin);
char search[10];
printf("Enter the search string\n");
scanf("%s",search);

char *ptr;
int i=0;
while(1)
{
ptr=strstr(string,search);
if(ptr!=NULL)
{
ptr = ptr+strlen(search);
i++;}
else 
break;
strcpy(string,ptr);
}

 printf("The substring %s  occurs %d times",search,i);
return 0;
}
