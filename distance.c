//to find the distance between two points 
#include<stdio.h>
#include<math.h>
int main()
{
	float x1,y1,x2,y2,distance;
	printf("enter x1,y1,x2 and y2 values");
	scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
	distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	printf("distance = %f",distance);
	return 0;
}

