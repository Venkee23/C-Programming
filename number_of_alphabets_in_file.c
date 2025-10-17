#include<stdio.h>                                                                                                                                                        
iint main()
{
	FILE *fp;
	char ch;
	int nv=0,nc=0,nd=0,ns=0;
	fp=fopen("input.txt","r");
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
		nv++;
		else if((ch>='a'&&ch<='z')||ch>='A'&&ch<='Z')
		nc++;
		else if(ch>='0'&&ch<='9')
		nd++;
		else
		ns++;
		ch=fgetc(fp);
	}
	printf("%d",nv);
    printf("%d",nc);
	printf("%d",nd);
	printf("%d",ns);
	fclose(fp);
	return 0;	
}
