#include<stdio.h>
int main(){
FILE*fp;
fp=fopen("data.txt","w");
if(fp==NULL)
{
printf("File Operationg failed");
return 1;
}
fprintf(fp,"name: Heasavwarsan\n");
fprintf(fp,"roll no : T717826L318\n");
fprintf(fp,"date of birth: 24.09.2008");
fclose(fp);
printf("data saved");
return 0;

}
