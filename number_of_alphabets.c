#include<stdio.h>
void main()
{
	char a[100];
	int i,v,c,d,u,l,space;
	puts("Enter string:");
	gets(a);
	v=c=d=u=l=0;
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
		{
			if(a[i]>='A'&&a[i]<='Z')
			u++;
			else
            l++;
			switch(a[i])
			{
				case 'a' :
				case 'A' :
				case 'e' :
				case 'E' :
				case 'i' :
			    case 'I' :
				case 'o' :
				case 'O' :
				case 'u' :
				case 'U' : 
				v++;
				break;
				default:c++;
			}
		}
		else if(a[i]>'0'&&a[i]<='9')
		d++;
		else if (a[i] == ' ')
		{
			++space;
        }
	}
	printf("Upper=%d\n",u);
	printf("Lower=%d\n",l);
	printf("Vowel=%d\n",v);
	printf("Consonant=%d\n",c);
	printf("Digits=%d\n",d);
	printf("Space=%d\n",space);
	for (i = 0;a[i]!='\0'; i++) 
	{
      if(a[i] >= 'a' && a[i] <= 'z')
	   {
         a[i] = a[i] - 32;
       }
    }
   printf("\nString in Upper Case = %s",a);
   for (i = 0; a[i]!='\0'; i++)
   {
      if(a[i] >= 'A' && a[i] <= 'Z') 
	  {
         a[i] = a[i] + 32;
      }
   }

   printf("\nString in Lower Case = %s", a);	
}
