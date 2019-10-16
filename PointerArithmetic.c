#include <stdio.h>

int main(){
int *ptr, c1= 5, c2=10,c3=15,c4 = 20,c5 = 25;
ptr = &c1;
printf("address of c1 = %p data at c1 = %d \n",&c1,c1);
printf("address of c2 = %p data at c2 = %d \n",&c2,c2);
printf("address of c3 = %p data at c3 = %d \n",&c3,c3);
printf("address of c4 = %p data at c4 = %d \n",&c4,c4);

printf("\n");

c2 =*++ptr;
printf("After step 1 c1 = %d, c2 =  %d, ptr =  %p *ptr = %d\n", c1,c2,ptr,*ptr);

c3 = ++*ptr;
printf("After step 2 c1 = %d, c3 =  %d, ptr =  %p *ptr = %d\n", c1,c3,ptr,*ptr);

c4 =*ptr++;
printf("After step 3 c1 = %d, c4 =  %d, ptr =  %p *ptr = %d\n", c1,c4,ptr,*ptr);

c5 =(*ptr)++;
printf("After step 4 c1 = %d, c5 =  %d, ptr =  %p *ptr = %d\n", c1,c5,ptr,*ptr);

return 0;
}
