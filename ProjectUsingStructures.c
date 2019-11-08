/*
This example project contains code to understand
    * Structure initialization
    * Nested Structures
    * Array of Structures
    * Passing structure to Functions - pass by value and pass by reference
    * Pointers to structure
    * Passing array of structures to functions
*/

#include <stdio.h>
#include <string.h>

struct account {
int aNo;
char aType;
char aName[50];
float balance;
struct {
    int date;
    int month;
    int year;  } lastpayment; 
    };

void display(struct account acc)
{
    printf("\n Account No %d Type %c Name %s", acc.aNo, acc.aType,acc.aName);
    //acc.aNo=100;
}

void sort(int n,struct account acc[])
{
  struct account temp;
    for(int i = 0;i<n-1;i++) 
        for(int j = i+1;j<n;j++) 
        {
            if (strcmp(acc[i].aName,acc[j].aName)>0)
            {
                temp = acc[i];
                acc[i]= acc[j];
                acc[j] = temp;
            }
        }  
}

void updateBalance(struct account *aPtr,float balance)
{
    aPtr->balance = balance;
    printf("\n Balance updated ");
}

int main()
{
    int n =4;
    struct account acc[4]= { {9,'S',"John",500,4,5,2019}, {10,'C',"Sakshi",.lastpayment.date =5,.lastpayment.month =4,.lastpayment.year = 2019},{11,'S',"Abhi",1000,5,4,2019}, {12,'C',"Zayn",2000,24,3,2019}};
    
   
   
   printf("\n Account Details");
   for(int i = 0;i<n;i++) 
       display(acc[i]);
    
    sort(n,acc);
    
    printf("\nAccount Details after Sorting");       
    for(int i = 0;i<n;i++) 
       display(acc[i]);
       
    updateBalance(&acc[2],20000);
    display(acc[2]);
    printf("Balance %f",acc[2].balance);
   
           
    return 0;
}


