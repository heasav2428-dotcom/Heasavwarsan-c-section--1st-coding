#include<stdio.h>
int main(){
FILE*fp;
fp=fopen("data.txt","w");
if(fp==NULL)
{
printf("File Operationg failed");
return 1;
}
 fprintf(fp,"Hello world");
 fclose(fp);
 printf("Data written successfully");
 return 0;
 }
