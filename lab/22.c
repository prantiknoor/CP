#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int num, index = -1, l=0, r=n;
  scanf("%d", &num);
  while(l <= r) {
    int mid = (l+r)/2;
    if(arr[mid] == num) {
      index = mid;
      break;
    }
    
    if(num > arr[mid]) {
      l = mid;
    } else {
      r = mid;
    }
  }
  printf("%d", index);
}