#include<stdio.h>
#include<string.h>
#include<stdlib.h>


char * avi_strcpy(char *str, int l)
{
char *temp;
int i;
temp=(char*)malloc(l*sizeof(char));
for(i=0;i<l;i++)
{
temp[i]=str[i];
}
temp[i]='\n';
return temp;
}


int main()
{
char str[100]="ballia_avinash_singh lala";
int l;
//printf("enter the string\n");
//scanf("%s",str);
l=strlen(str);
printf("%s\n",avi_strcpy(str,l));
}
