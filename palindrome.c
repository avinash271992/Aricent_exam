#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
char str[20]="malayalm";
int i,l;
//printf("enter the palindrome word\n");
//scanf("%s",str);
l=strlen(str);
for(i=0;i<l;i++)
{

   
if(str[i] == str[l-i] && ((l-i)> (i+1) ))
{
printf("%s is not a palindrome word\n",str);
return 0  ;
}
}
printf("%s is palindrome word",str);
}

