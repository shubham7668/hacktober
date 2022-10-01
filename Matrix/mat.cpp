#include<stdio.h>
main()
{
	int a[3][3],i,j;
	printf("enter the element of A");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	scanf("%d",&a[i][j]);
	printf("matrix a is:\n");
	for(i=0;i<3;i++)
	{
	
	for(j=0;j<3;j++)
	printf("%d   ",a[i][j]);
	printf("\n");
    }
    for(i=0;i<3;i++)
	{
	
	for(j=0;j<3;j++)
    a[i][j]=a[j][i];
    }
    printf("transpose is:\n");
    for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	printf("%d   ",a[i][j]);
	printf("\n");
    }

}
