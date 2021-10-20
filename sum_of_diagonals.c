#include <stdio.h>

int main()
{
	int arr[100][100];
	int n;
	printf("Enter the size\n");
	scanf("%d", &n);
	int main_diag_sum = 0, min_diag_sum = 0;
	printf("Enter the array");
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			scanf("%d", &arr[i][j]);
			if (i == j)
				main_diag_sum += arr[i][j];
			if (i + j == n - 1)
				min_diag_sum += arr[i][j];
		}
	}
	printf("The sum of main diagonal elements is %d \nThe sum of other diagonal elements is %d\n", main_diag_sum, min_diag_sum);

	return 0;
}