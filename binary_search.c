#include <stdio.h>

int main() {
  int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
  int item;
  int beg, end, mid;
  beg = 0;
  end = 8;
  int i;
  for (i = 0; i <= end; i++) {
    printf("%d\n", arr[i]);
  }
  printf("Enter a value from the array: ");
  scanf("%d", &item);

  while (beg <= end) {
    int mid = (beg + end) / 2;
    if (arr[mid] == item) {
      printf("The required element is %d", item);
      break;
    } else if (arr[mid] > item) {
      end = mid - 1;
    } else if (arr[mid] < item) {
      beg = mid + 1;
    }
  }
  return -1;
}
