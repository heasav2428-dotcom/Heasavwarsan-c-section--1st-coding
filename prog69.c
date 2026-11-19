#include<stdio.h>
int main(){
char str[50];
FILE*fp;
  fp=fopen("data.txt","r");
if(fp==NULL)
{
printf(" File cannot be opened");
return 1;
}
  fscanf(fp,"%s",str);
  printf("%s",str);
  fclose(fp);
  return 0;
  }
