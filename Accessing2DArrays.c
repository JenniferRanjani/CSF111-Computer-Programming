#include <stdio.h>

int main()
{
    
    int arr[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };    
    int i = 1,j = 2;
    
    printf("\n arr =  %p",arr);
    printf("\n *arr =  %p",*arr);
    printf("\n (arr+i) =  %p",(arr+i));
    printf("\n *(arr+i) =  %p",*(arr+i));
    printf("\n *(arr+i)+j =  %p",*(arr+i)+j);
    printf("\n *(*(arr+i)+j) =  %d",*(*(arr+i)+j));
    
        

    return 0;
}
