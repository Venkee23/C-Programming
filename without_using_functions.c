#include<stdio.h>
#include<string.h>
void main()
{
char s1[10],s2[10],s3[10];
int opt,i=0,j,len=0;
scanf("%d",&opt);
switch(opt)
{
case 1:
{
printf("Enter any string \n");
scanf("%s",s1);
for(i=0;s1[i]!='\0';i++);
printf("The length of the string %d",i);
break;
}
case 2:
{
printf(" String Concatenation \n");
printf("\nEnter the First string:\n");
scanf("%s", s1);
printf("\nEnter the Second string:\n");
scanf("%s",s2);
for(i=0;s1[i]!='\0';i++)
{
s3[i]=s1[i];
}
s3[i]='\0';
for(j=0;j<=i;j++)
{
s3[i+j]=s2[j];
}
printf("The Concatenated string is %s",s3);
break;
}
case 3:
{
printf(" Reverse the string ");
printf("\nEnter the string:\n");
scanf("%s",s1);
while(s1[i]!='\0')
{
len=len+1;
i++ ;
}
for(i=len-1;i>=0;i--)
{
printf("%c",s1[i]);
}
break;
}
default:
{
printf("Not a valid Option");
}
}
}


