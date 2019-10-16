#include <stdio.h>
#define SIZE 5
int avg(int n, int list[])
{
int sum = 0;
for (int i=0;i<n;i++){
//	list[i] = list[i]*2;    //Uncomment this line to see whether modifying the array within the function gets reflected at main()
     sum = sum + list[i];}
return sum/n;
}

int main(){
int intArray[SIZE], average;

for (int i=0;i<SIZE;i++){
   intArray[i] = i;
   printf("%d\t",intArray[i]);  } 
   
average=avg(SIZE,intArray);
printf("Average=%d\n", average);

printf("After calling avg…\n");
for (int i=0;i<SIZE;i++)
	printf("%d\t",intArray[i]);
	
return 0;
}

