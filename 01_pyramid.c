#include<stdio.h>
void main()
{
	int i,j;
	printf("\nRight angle triangle of '01' with 6 stairs is as:\n");
	printf("_______________________________________\n\n");
	for(i=1;i<=6;i++)/*used for changing line*/
	{
		for(j=1;j<=i;j++)/*used for printing "01" */
		{
			printf("01");//printing 01
		}
		printf("\n");//changing line
	}
}
