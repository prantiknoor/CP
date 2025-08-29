#include <stdio.h>

int main() {
  int m1, n1, m2, n2;
  scanf("%d %d", &m1, &n1);
  int mat1[m1][n1];
  for (int i = 0; i < m1; i++) {
    for (int j = 0; j < n1; j++) {
      scanf("%d", &mat1[i][j]);
    }
  }
  scanf("%d %d", &m2, &n2);
  int mat2[m2][n2];
  for (int i = 0; i < m2; i++) {
    for (int j = 0; j < n2; j++) {
      scanf("%d", &mat2[i][j]);
    }
  }

  int mat3[m1][n2];

  if(n1 != m2) {
    printf("The given matrices cannot be multiplied.\n");
  } else {
    for(int i = 0; i < m1; i++) {
      for(int j = 0; j < n2; j++) {
        int ans = 0;
        for(int k = 0; k < n1; k++) {
          ans += mat1[i][k] * mat2[k][j];
        }
        mat3[i][j] = ans;
        printf("%d ", ans);
      }
      printf("\n");
    }
  }
}