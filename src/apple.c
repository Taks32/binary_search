#include <stdio.h>

int n;
int k;
int A[100000];

int ltk(int num);


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  if (k < n) return -1;
  for (i = 0; i < n; i++) {
    scanf("%d", &A[i]);
  }
  lb = 0;
  ub = A[n - 1];
  while (ub - lb > 1) {
    int m = (lb + ub) / 2;
    if (ltk(m) <= k) ub = m;
    else lb = m;
  }
  printf("%d", ub);
  return 0;
}

int ltk(int num) {
  int i, res;
  res = 0;
  for (i = 0; i < n; i++) {
    res += A[i] / num;
    if (A[i] % num != 0) res++;
    if (res > k) break;
  }
  return res;
}
