#include<stdio.h>

int main() {
  int a, b, num, n, d, i, f, sum;
  printf("Enter the lower limit: ");
  scanf("%i", & a);
  printf("Enter the upper limit: ");
  scanf("%i", & b);
  printf("The Krishnamurthy numbers in the range are :\n");
  for (n = a; n <= b; n++) {
    if (n == 0)
      continue;
    sum = 0;
    num = n;
    while (num != 0) {
      d = num % 10;
      f = 1;
      for (i = 2; i <= d; i++) {
        f *= i;
      }
      sum += f;
      num /= 10;
    }
    if (n == sum) {
      printf("%i\n", n);
    }
  }
}
