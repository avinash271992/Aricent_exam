#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
char str[100]="avinash1234singh";
int i;
for(i=0;i<strlen(str);i++)
{
if(str[i]>=48 && str[i]<=57)
printf("%c",str[i]);
}
}
