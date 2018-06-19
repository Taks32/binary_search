#include <stdio.h>

int n;
int k;
int A[100000];


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  if (A[0] > k) {
    printf("%d", n);
    return 0;
  }
  if (A[n - 1] < k) {
    printf("%d", n);
    return 0;
  }
  lb = 0;
  ub = n;
  while (ub - lb > 1) {
    int m = (lb + ub) / 2;
    if (A[m] > k) ub = m;
    else lb = m;
  }
  printf("%d", ub);
  return 0;
}
