#include<stdio.h>

int main()
{
int a = 10; double b = 2.5; char c ='A';    
int *iptr = &a;
double *fptr = &b;
char *cptr = &c;

printf("\nSize of Integer Pointer   : %lu Bytes",sizeof(iptr));
printf("\nSize of Character Pointer : %lu Bytes",sizeof(cptr));
printf("\nSize of Double Pointer    : %lu Bytes",sizeof(fptr));

printf("\nAddress at Integer Pointer   : %p Bytes",iptr);
printf("\nAddress at Character Pointer : %p Bytes",cptr);
printf("\nAddress at Double Pointer    : %p Bytes",fptr);

 iptr++;
 cptr++;
 fptr++;

//  iptr = iptr + 3;
//  cptr = cptr + 4;
//  fptr = fptr + 2;

printf("\nAddress at Integer Pointer after increment  : %p Bytes",iptr);
printf("\nAddress at Character Pointer after increment: %p Bytes",cptr);
printf("\nAddress at Double Pointer after increment   : %p Bytes",fptr);

return 0;
}
