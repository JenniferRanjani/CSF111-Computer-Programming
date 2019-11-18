#include<stdio.h>

int main () {
   FILE *fp;
  int src[]={123,234,345,567}, dest[4];

   fp = fopen( "file.bin" , "wb" );
   
  fwrite(src , sizeof(src),1 , fp );
   fclose(fp);
   
   fp = fopen( "file.bin" , "rb" );
  fread(dest,sizeof(dest),1,fp);
  
  for(int i=0;i<4;i++)
    printf("The retrieved data is %d ",dest[i]);

   fclose(fp);
  
   return(0);
}
