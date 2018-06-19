#include <stdio.h>

int n;
int k;
int A[100000];

int ge(int m);
int sum();
int max();

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  lb = max() - 1;
  ub = sum();
  while (ub - lb > 1) {
    int m = (lb + ub) / 2;
    if (ge(m) <= k) ub = m;
    else lb = m;
    printf("%d, %d\n", lb, ub);
  }
  printf("%d", ub);
  return 0;
}

int ge(int m) {
  int i, res, tmp;
  res = 0;
  tmp = 0;
  for (i = 0; i < n; i++) {
    tmp += A[i];
    if (tmp > m) {
      res++;
      tmp = A[i];
    }
  }
  return ++res;
}

int sum() {
  int i, res;
  res = 0;
  for(i = 0; i < n; i++) res += A[i];
  return res;
}

int max() {
  int i, res;
  res = A[0];
  for (i = 1; i < n; i++) {
    if(res < A[i]) res = A[i];
  }
  return res;
}
