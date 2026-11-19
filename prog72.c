#include<stdio.h>
 int main(){
 char name[30];
 int age;
 float mark;
 FILE*fp;
 scanf("%c",&name);
 printf("#include<stdio.h>
int main(){
FILE*fp;
fp=fopen("data.txt","w");
if(fp==NULL)
{
printf("File Operationg failed");
return 0;
}
 fp=fopen("student10.txt","w");
 if (fp==NULL)
 {
 printf("file cannot be excute");
 return 1;
 }
  fprintf(fp,"Student Details\n");
  fscanf(fp,"%c",&name);
  fprintf(fp,"Enter Students Name : %c\n");
  fscanf(fp,"%d",&age);
  fprintf(fp,"Enter age: %d");
  fscanf(fp,"%f",mark);
  fprintf(fp,"Enter marks: %f",mark);
  fclose(fp);
  printf("data saved");
  return 0;
  }
 

