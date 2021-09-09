#include <stdio.h>

int main()
{
	int arr[100][100];
	int x, y;
	printf("Enter the Dimesions of the array");
	scanf("%d %d", &x, &y);
	int row_sum[100] = {0};
	int column_sum[100] = {0};
	for (int i = 0; i < x; ++i)
	{

		for (int j = 0; j < y; ++j)
		{
			scanf("%d", &arr[i][j]);
			row_sum[i] += arr[i][j];
			column_sum[j] += arr[i][j];
		}
	}

	printf("The row Sums are  ");
	for (int i = 0; i < x; ++i)
		printf("%d ", row_sum[i]);
	printf("\nThe column sums are  ");
	for (int i = 0; i < y; ++i)
		printf("%d ", column_sum[i]);

	return 0;
}