#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100];
int b[100],n,i,temp,int=0;
scanf("%s",a);
l=strlen(a);
for(i=0;i<l;i++)
{
if(a[i]=='I")
{
b[i]=1;
}
else if(a[i]=='V")
{
b[i]=5;
}
else if(a[i]=="X")
{
b[i]=10;
}
else if(a[i]=="L")
{
b[i]=50;
}
else if(a[i]=="C")
{
b[i]=100;
}
else if(a[i]=="D")
{
  b[j]=500;
  }
 else
  {
  printf("INVALID");
   }
 }
  for(i=0;i<l;i=i+2)
    {
      if(b[i]<b[i+1])
        {
        temp=b[i+1]-b[i];
        }
      else  
        {
        temp=b[i+1]+b[i];
        }
          int=temp+int;
       }
        printf("%d",int);
        getch();
    }

