#include<stdio.h>
int main(){
FILE*fp;
fp=fopen("data2.txt","w");
if(fp==NULL)
{
printf("file cannot be exist");
return 1;
}
fprintf(fp,"name; jebin\n");
fprintf(fp,"place : thirunelveli\n");
fprintf(fp,"college : karpagam enginering college\n");
fprintf(fp,"department : ECE-C\n");
fprintf(fp,"Roll number: t717826L320");
fclose(fp);
printf("data saved");
return 0;
}
