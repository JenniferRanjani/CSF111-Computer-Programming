// Lower to upper case conversion of character array
#include <stdio.h>
#include <ctype.h>

int main()
{
     char c[20];
     int i=0;
     
     c[i]=getchar();
     
     while(c[i]!='\n')
     {
         i++;
         c[i]=getchar();
     }
 
 int size =i;
   for(i=0;i<size;i++)
     putchar(toupper(c[i]));
     
      return 0;
}
