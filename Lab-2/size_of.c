#include <stdio.h>

int main()
{
	char a;
	int b;
	short c;
	short int d;
	long int e;
	float f;
	double g;
	long double h;
	printf("the sizes are char:%i\nint:%i\nshort:%i\nshort int:%i\nlong int:%i\nfloat:%i\ndouble:%i\nlong double:%i\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d), sizeof(e), sizeof(f), sizeof(g), sizeof(h));

	return 0;
}