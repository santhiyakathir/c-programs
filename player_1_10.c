include <stdio.h>
include <condo.h>
void main()
{
char a[100],b[100];
int i,j,count=0;
scanf ("%s",a);
scanf ("%s",b);
for (i=0;a[i]!="\0";i++)
{
for (i=0;b[i]!="\0";i++)
{
if(a[i]!=b[i])
{
count++;
}
}
}
if(count==1)
{
printf ("yes");
}
else
{
printf ("no");
}
getch();
}
