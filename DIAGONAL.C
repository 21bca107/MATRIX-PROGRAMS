/*write a program to enter 3/3 metrix and check it is diagonal or not*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int m1[3][3],i,j,matrix;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter value m1[%d][%d]:",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",m1[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i!=j && m1[i][j]!=0)
			{
				matrix=1;
			}

		}
	}
	if(matrix==1)
		printf("Matrix is not diagonal");
	else
		printf("matrix is diagonal");
	getch();
}