#include <stdio.h>

int main()
{
    int (*x1)[3];
    int y[2][3]={{1,2,3},{4,5,6}};
    x1 = y;
  
    for (int i = 0; i<2; i++)
    
    for (int j = 0; j<3; j++)
    
        printf("\n The X1 is %d Y is %d",*(*(x1+i)+j),y[i][j]);

    return 0;
}
