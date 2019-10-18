#include <stdio.h>

int main(){
int *ptr,i, iA[5]={5,10,15,20,25};

for(i=0;i<5;i++)
	printf("\n iA[%d]: address = %p data = %d \n",i,&iA[i],iA[i]);

//Accessing the Arrays using pointer
ptr = iA;
for(i=0;i<5;i++){ 
	printf("\n pointer address = %p data = %d ",ptr,*ptr); 
	ptr++;}
  
//Different ways for accessing the arrays - Method2
for(i=0;i<5;i++)
	printf("\n pointer address = %p data = %d ",ptr+i,*(ptr+i)); 
  
//Different ways for accessing the arrays - Method3
for(i=0;i<5;i++)
	printf("\n pointer address = %p data = %d ",iA+i,*(iA+i)); 
  

	

return 0;}
