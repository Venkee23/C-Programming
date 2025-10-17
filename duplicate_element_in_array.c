#include<stdio.h>
#include<stdlib.h>
int main()
{
   int a[50],i,j,k, number;
   printf("Enter size of the array");
   scanf("%d",&number);
   printf("Enter Elements of the array:");
   int len=number;
   for(i=0;i<number;i++)
   {
      scanf("%d",&a[i]);
   }
   printf("Entered element are: ");
   for(i=0;i<number-1;i++)
   {
   	
      printf("%d ",a[i]);
   }
   for(i=0;i<number-1;i++)
   {
      for(j = i+1; j < number; j++)
	  {
         if(a[i] == a[j])
		 {
            for(k = j; k <number-1; k++)
             {
             	 a[k] = a[k+1];
            	 a[k+1]=0;
			 }
            printf("\n%d-%d\n",i,j);	
			getch();		  
            j--;

            
         }
      }
   }
   printf("After deleting the duplicate element the Array is:");
   for(i=0;i<len;i++){
      printf("%d ",a[i]);
   }
}
