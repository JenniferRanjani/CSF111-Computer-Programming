/*   Problem Statement
Write a C Program that receives two strings S1 and S2. Compare the two strings and copy the two strings into S3 in alphabetical order. If both the strings are equal then copy only the first string into S3. Use string processing functions only.

For instance, if  
S1 = “Neha”
S2 = “Aditi”
Then
S3 = “Aditi Neha”

Note the space in between two strings.

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "Neha";   //ascii code for N is 78
    char s2[] = "Aditi";   //ascii code for A is 65
    char space[] =" ";
    char s3[25];
    int d = strcmp(s1,s2);
  if (d==0)

      strcpy(s3,s1);
      else if (d<0)
      {
          strcpy(s3,s1);
          strcat(s3,space);
          strcpy(s3+strlen(s1)+1,s2);
      }
      else
      {
          strcpy(s3,s2);
          strcat(s3,space);
          strcpy(s3+strlen(s2)+1,s1);
      }
         
printf("The string is %s",s3);
    return 0;
}

