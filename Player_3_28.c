#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int 
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
a[i]='$';
}
}
for(i=0;a[i]!='\0';i++)
{
if(a[i]!='$')
{
printf("%c",a[i]);
}
}
return 0;
}
