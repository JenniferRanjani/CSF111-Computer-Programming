#include <stdio.h> 
  
void swap(int *x, int *y) 
{ 
    int temp = *x; 
    *x = *y; 
    *y = temp; 
    
    printf("After Swapping (within function) %d %d\n", *x, *y); 
} 
  
int main() 
{ 
    int x = 10, y = 20;
    printf("Before Swapping (Main) %d %d\n", x, y); 
    swap(&x, &y); 
    printf("After Swapping (Main) %d %d\n", x, y); 
    return 0; 
} 
