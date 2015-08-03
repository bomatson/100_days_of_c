#include <stdio.h>

int binarySearch(int x, int nums[], int n);

int main() {
  int array[] = {1,2,3,4,5};

  printf("Position of 3: %d\n", binarySearch(3, array, 5));
  printf("Position of -2: %d\n", binarySearch(-2, array, 5));
  printf("Position of 5: %d\n", binarySearch(5, array, 5));
  return 1;
}

int binarySearch(int x, int nums[], int n) {
  int low, high, mid;
  low = 0;
  high = n - 1;

  // rewrote this binary search to only perform a single
  // conditional statement in the loop
  // also known as 'deferred equality'
  while(low < high) {
    mid = (high + low) / 2;
    if(nums[mid] < x)
      low = mid + 1;
    else
      high = mid;
  }

  if((high == low) && (nums[low] == x))
    return low;
  else
    return -1;
}
