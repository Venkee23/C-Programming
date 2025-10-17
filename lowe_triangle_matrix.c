#include <stdio.h>
int main()
{   
    int i,j,r,c;
    printf("Enter the Number of Rows: ");
    scanf("%d", &r);
    printf("Enter the Number of Columns: ");
    scanf("%d", &c);
    int M[10][10];
    printf("Enter the Elements in the Matrix: \n");
    for (i = 0; i <r; i++)
    {
        for (j = 0; j <c; j++)
        {
            scanf("%d",&M[i][j]);
        }
    }
    // Lower Triangular Matrix Logic
    for (i = 0; i <r; i++)
    {
        for (j = 0; j <c; j++)
        {
            if (i < j)
            {
                M[i][j] = 0;
            }
        }
    }
    printf("The Lower Trangular Matrix is: \n");
    for (i = 0; i <r; i++)
    {
        for (j = 0; j <c; j++){
        	if(M[i][j])
        {
            printf(" is lower ");
        }
        else{
        	printf("%d id not lower");
		}
	}
    }
}
