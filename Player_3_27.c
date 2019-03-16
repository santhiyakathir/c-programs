#include<stdio.h>
#include<string.h>
int main()
{
int c=0,i;
char a[100];
gets(a);
while (a[c]!='\0')
{
if(a[c]>='A'&&a[c]<='Z')
{
a[c]=a[c]+32;
} 
else if(a[c]>='a'&&a[c]<='z')
{
a[c]=a[c]-32;
} 
c++;
} 
printf("%s",a);
return 0;
}   
