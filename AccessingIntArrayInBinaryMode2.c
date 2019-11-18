#include<stdio.h>

int main () {
   FILE *fp;
  int src[]={123,234,345,567}, dest[4];

   fp = fopen( "file.bin" , "wb" );
   
  for(int i =0;i<4;i++)
  fprintf(fp, "%d",src[i]);
   
   fclose(fp);
   
   fp = fopen( "file.bin" , "rb" );
  
  for(int i=0;i<4;i++){
      fscanf(fp,"%3d",&dest[i]);       // check what happens when the format specifier%d is used instead of %3d 
      printf("The retrieved data is %d ",dest[i]);
  }
    

   fclose(fp);
  
   return(0);
}
