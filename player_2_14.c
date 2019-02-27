#include<stdio.h>
#include<string.h>
void main()
{
char a[100];
int i,l;
scanf("%s",a);
l=strlen(a);
for(i=l-1;i>=0;i--)
{
if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u')
{
printf("%c",a[i]);
}
}
getch();
}

