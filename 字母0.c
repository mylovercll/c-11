#include<stdio.h>
int main()
{
	char k = 'F';
	for (int i = 1; i <= 5; i++)
	{
		for (int j=0; j<i ; j++)
		{
			printf("%c", k-j);
		}
		printf("\n");

	}

	return 0;

}
