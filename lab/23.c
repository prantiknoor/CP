#include <stdio.h>

void merge(int a[], int b[], int s[], int m, int n) {
  for (int i = 0, j = 0, k = 0; k < (m + n); k++) {
    if (i == m)
      s[k] = b[j++];
    else if (j == n)
      s[k] = a[j++];
    else
      s[k] = a[i] <= b[j] ? a[i++] : b[j++];
  }
}

void merge_sort(int arr[], int l, int r) {
  if (l < r) {
    int mid = (l + r) / 2;
    merge_sort(arr, l, mid);
    merge_sort(arr, mid+1, r);
    merge(a)
  }
}

int main() {
  int a[] = {1, 3, 5};
  int b[] = {2, 4};
  int m = 3, n = 2;
  int s[m + n];

  merge(a, b, s, m, n);
  for (int i = 0; i < 5; i++) {
    printf("%d ", s[i]);
  }
}