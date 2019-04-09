#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int c=0,i;
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
c++;
}
}
printf("%d",c);
return 0;
}
