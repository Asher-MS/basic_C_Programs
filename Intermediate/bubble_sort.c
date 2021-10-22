#include <stdio.h>

void bubblesort(int * _array, int _num) {
  for (int i = 0; i < _num; ++i) {
    for (int j = 0; j < _num - i; ++j) {
      if (_array[j] > _array[j + 1]) {
        int temp;
        temp = _array[j + 1];
        _array[j + 1] = _array[j];
        _array[j] = temp;
      }
    }
  }
}

int main() {
  int array[100];
  int num;
  printf("Enter the no of elements\n");
  scanf("%d", & num);
  printf("Enter the elements");
  for (int i = 0; i < num; ++i) {
    scanf("%d", & array[i]);
  }
  bubblesort(array, num);
  printf("Sorted array is : ");
  for (int i = 0; i < num; ++i) {
    printf("%d ", array[i]);
  }

  return 0;
}
