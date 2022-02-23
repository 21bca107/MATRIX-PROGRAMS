/* write a program to enter two 3/3 metrix and print multification of if*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int s1[3][3],s2[3][3],s3[3][3],i,j;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter value s1[%d][%d]:",i,j);
			scanf("%d",&s1[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter value s2[%d][%d]:",i,j);
			scanf("%d",&s2[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",s1[i][j]);
		}
		printf("\n");
	}printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",s2[i][j]);
		}
		printf("\n");
	}printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			s3[i][j]=s1[i][j]*s2[i][j];
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",s3[i][j]);
		}
		printf("\n");
	}
	getch();
}
