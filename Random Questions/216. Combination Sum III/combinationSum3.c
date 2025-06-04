// not working (made only for k=3...)
#include <stdio.h>
#include <stdlib.h>

int **combinationSum3(int k, int n, int *returnSize, int **returnColumnSizes) {

  int j = 0;

  int **returnArray = (int **)malloc(100 * sizeof(int));
  if (returnArray == NULL) {
    return NULL;
  }

  *returnColumnSizes = (int *)malloc(100 * sizeof(int));
  if (returnColumnSizes == NULL) {
    return NULL;
  }

  for (int i0 = 1; i0 < 10; i0++) {
    for (int i1 = i0 + 1; i1 < 10; i1++) {
      for (int i2 = i1 + 1; i2 < 10; i2++) {
        if (i0 + i1 + i2 == n) {

          returnArray[j] = (int *)malloc(k * sizeof(int));
          if (returnArray[j] == NULL) {
            return NULL;
          }

          returnArray[j][0] = i0;
          returnArray[j][1] = i1;
          returnArray[j][2] = i2;

          (*returnColumnSizes)[j] = k;
          j++;
        }
      }
    }
  }

  *returnSize = j;

  return returnArray;
}

int main() {
  int k = 0;
  scanf("%d", &k);

  int n = 0;
  scanf("%d", &n);

  int returnSize = 0;

  int *returnColumnSizes = NULL;

  int **answer = combinationSum3(k, n, &returnSize, &returnColumnSizes);

  for (int i = 0; i < returnSize; i++) {
    for (int j = 0; j < *returnColumnSizes; j++) {
      printf("%d ", answer[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < returnSize; i++) {
    free(answer[i]);
  }

  free(answer);
  free(returnColumnSizes);

  return 0;
}
