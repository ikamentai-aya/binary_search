#include <stdio.h>

int n;
int k;
int A[100000];

int p(int x){
    int i,j, l;
    i = 0;
    j = k - 1;
    l = x;
    while(i < n && j >= 0){
        if(l - A[i] < 0){
            l = x;
            j = j-1;
        }
        else {
        	l = l - A[i];
        	i = i + 1;
        }
    }
    return j >= 0;
    }


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
    lb = 0;
    ub = 10000;
    int m;
    while(ub - lb > 1){
        m = (lb + ub)/2;
        if(p(m)){
            ub = m;
        }
        else {
            lb = m;
        }
    }
    printf("%d\n", ub);
  return 0;
}
