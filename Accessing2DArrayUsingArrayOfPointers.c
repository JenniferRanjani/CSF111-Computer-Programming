#include <stdio.h>

int main()
{
    int *x2[3];
    int y[2][3]={{1,2,3},{4,5,6}};
       
    for (int i = 0; i<2; i++)
    {
      x2[i] = &y[i][0];
      for (int j = 0; j<3; j++)
            printf("\n The X2 is %d Y is %d",*(x2[i]+j),y[i][j]);
     }

    return 0;
}
