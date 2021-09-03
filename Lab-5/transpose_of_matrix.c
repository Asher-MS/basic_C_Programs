#include <stdio.h>

int main()
{
	int arr[100][100];
	int transpose_arr[100][100];
	int x, y;
	printf("Enter the Dimesions of the array");
	scanf("%d %d", &x, &y);
	printf("Enter the array");
	for (int i = 0; i < x; ++i)
	{

		for (int j = 0; j < y; ++j)
		{
			scanf("%d", &arr[i][j]);
			transpose_arr[j][i] = arr[i][j];
		}
	}
	printf("The transpose is\n");
	for (int i = 0; i < y; ++i)
	{

		for (int j = 0; j < x; ++j)
		{

			printf("%d ", transpose_arr[i][j]);
		}

		printf("\n");
	}

	return 0;
}