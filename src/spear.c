#include <stdio.h>

int n;
int k;
int A[100000];

int ge(int m);


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  lb = 0;
  ub = A[n - 1];
  while (ub - lb > 1) {
    int m = (ub + lb) / 2;
    if(ge(m) < k) ub = m;
    else lb = m;
    printf("%d, %d\n", ub, lb);
  }
  printf("%d", lb);
  return 0;
}

int ge(int m) {
  int i, res;
  res = 0;
  for (i = 0; i < n; i++) {
    res += A[i] / m;
  }
  return res;
}
