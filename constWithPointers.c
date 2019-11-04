#include <stdio.h>
int main() 
{ 
    const int a =98, b =99; 
    const int *ptr1 = &a; 
    int * const ptr2 = &a;
    
    printf( "value pointed to by ptr: %d\n", *ptr1); 
    ptr1 = &b;   //ptr1 points to another constant b (allowed)
   // uncomment the following lines of code one at a given time to study the impact
   // print the different pointer addresses and its values 
   
   // *ptr1 = b;  //modifying the value at ptr1 (not allowed)
   // ptr2 = &b; //constant pointer ptr2 can not be modified to point different address
   // *ptr2 = b;  //value at ptr2 can be modified
  
    
     printf( "value pointed at ptr1: %d and ptr2: %d \n", *ptr1, *ptr2); 
   
    
    return 0;
}
