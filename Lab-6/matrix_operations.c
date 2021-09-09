/* 
TO-DO
------
1.Write the main structure of the code 
2.Write the main function(The main menu logic)
3.Write the addition function
4.Write the transpose function
5.Write the Product function
6.Write the input function
7.Write the display function

*/

#include<stdio.h>
#define max 100

//FUNCTION TO INPUT THE MATRIX
void input_matrix(int (*matrix)[max],int *n,int *m)
{	
	printf("Enter the dimensions");
	scanf("%d %d",n,m);
	printf("Enter the matrix\n");
	for(int i=0;i<*n;++i)
	{	
		for(int j=0;j<*m;++j)
		{
			scanf("%d",&matrix[i][j]);
		}
	}


}

//FUNCTION TO DISPLAY THE MATRICES
void matrix_display(int (*matrix)[max],int n,int m)
{	
	printf("The result is\n");
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<m;++j)
		{
			printf("%d ",matrix[i][j]);

		}
		printf("\n");
	}


}


//FUNCTION TO ADD THE MATRICES
void matrix_addition()
{	
	int matrix1[max][max],matrix2[max][max];
	int n1,n2,m1,m2;
	int result[max][max];

	input_matrix(matrix1,&n1,&m1);
	input_matrix(matrix2,&n2,&m2);
	
	printf("The sum is \n");
	if(n1==n2 && m1==m2)
	{
		for(int i=0;i<n1;++i)
		{
			for(int j=0;j<m1;++j)
			{
				result[i][j]=(matrix1[i][j]+matrix2[i][j]);
				
			}
			
		}
	}else
	{
		printf("Not Possible");
	}
	matrix_display(result,n1,m1);
	
}

//FUNCTION FIND THE TRANSPOSE OF THE MATRIX
void matrix_transpose()
{
	int matrix[max][max];
	int result[max][max];
	int n,m;
	input_matrix(matrix,&n,&m);
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<m;++j)
		{
			result[j][i]=matrix[i][j];
			
		}
		
	}
	matrix_display(result,m,n);
	


}

//FUNCTION TO FIND THE PRODUCT OF THE MATRICES
void matrix_multiplication()
{	
	int matrix1[max][max],matrix2[max][max];
	int n1,n2,m1,m2;
	int result[max][max];
	input_matrix(matrix1,&n1,&m1);
	input_matrix(matrix2,&n2,&m2);
	if(m1==n2)
	{
		for(int i=0;i<n1;++i)
		{
			for(int j=0;j<m1;++j)
			{
				int temp_sum=0;
				for(int k=0;k<m1;++k)
					temp_sum+=matrix1[i][k]*matrix2[k][j];
				result[i][j]=temp_sum;

			}
		}
	}else
	{
		printf("Multiplication not posiible");
		return;
	}
	matrix_display(result,n1,m2);
	

}




//MAIN FUNCTION
int main()
{	
	printf("1.Matrix Addition\n2.Matrix Multiplication\n3.Matrix Transpose \n Enter you choice:");
	int choice;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		{
			matrix_addition();
			break;
		}

		case 2:
		{
			matrix_multiplication();
			break;
		}
		case 3:
		{
			matrix_transpose();
			break;
		}
		default:
		{
			printf("Wrong choice");
		}

	}

	
	return 0;
}
