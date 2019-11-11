#include <stdio.h>

long factorial_itr(int n){
    long result =1;
    for (int i=n;i>0;i--)
     result*=i;
 return result;
}

long factorial_rec(int n){
    if(n==1)
      return 1;
    else 
      return n*factorial_rec(n-1);  
}

int main()
{
    int n = 4;
    printf("\n The factorial of %d using Iteration is %ld",n,factorial_itr(n));
    printf("\n The factorial of %d using Recursion is %ld",n,factorial_rec(n));
    
   return 0;
}
