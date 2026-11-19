#include<stdio.h>
int main(){
int r=18;
char name[20];
float mark=98.5;
FILE*fp;
fp=fopen("student.txt","w");
if(fp==NULL)
{
 fprintf(fp,"file cannot be created");
 return 1;}
 int main()
 {
 fprintf(fp," name: %c\n",name[20]);
 fprintf(fp," Roll no: %d\n",r);
 fprintf(fp," Mark:%f",mark);
 }
 fclose;
 fprintf("student file created successfully to student.txt.\n");
 return 0;
 }
 
 
 
 
