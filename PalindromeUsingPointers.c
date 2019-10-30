//Check the string if it is a palindrom using pointers

#include <stdio.h> 
#include <string.h>
  
// Function to check if the string is palindrome using pointers 
void isPalindrome(char* string) 
{ 
    char *rev; 
  
    int i,len = strlen(string);
    
    rev = &string[len-1];
  
    for (i=0;i<=len/2;i++) 
        if (*string == *rev) { 
            ++string; 
            rev--; 
        } 
        else
            break; 
     
  
    if (string > rev) 
        printf("String is Palindrome"); 
    else
        printf("String is not a Palindrome"); 
} 
  
// Driver code 
int main() 
{ 
    char *str = "madam"; 
   
    isPalindrome(str); 
  
    return 0; 
} 
