#include <stdio.h>

int main(){
int *ptr[3],i, iA[]={5,10,15}, iB[] = {1,2,3},iC[]={2,4,6};

ptr[0]=iA;
ptr[1]=iB;
ptr[2]=iC;


for(i=0;i<3;i++) {
    printf("\n iA[%d]: addr = %p data = %d ",i,ptr[0]+i,*(ptr[0]+i));
    printf(" iB[%d]: addr = %p data = %d ",i,ptr[1]+i,*(ptr[1]+i));
    printf(" iC[%d]: addr = %p data = %d ",i,ptr[2]+i,*(ptr[2]+i));  }

return 0;
}
