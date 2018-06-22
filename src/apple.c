#include <stdio.h>

int n;
int k;
int A[100000];

int p(int x){
    int j, l, g;
    j = 0;
    l = 0;
    while(j < n){
        if(A[j]%x == 0){g = A[j]/x;}
        else {g = A[j]/x + 1;}
        l = l + g;
        j = j + 1;
    }
    return l <= k;
}

int main(){
    int i, lb, ub,j, l;
    scanf("%d%d", &n, &k);
    for(i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
    l = 0;
    j = 0;
    while(j < n){
        if(A[j] > l){l = A[j];}
        j = j + 1;
    }
    lb = 0;
    ub = l;
    int m;
    while(ub-lb > 1){
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
