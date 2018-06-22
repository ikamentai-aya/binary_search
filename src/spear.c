#include <stdio.h>

int n;
int k;
int A[100000];

int p(int x){
    int a, b, i;
    a = 0;
    i = 0;
    while(i < n){
        b = A[i]/x;
        a = a + b;
        i = i+1;
    }
    return a > k-1;
}


int main(){
    int i, lb, ub;
    scanf("%d%d", &n, &k);
    for(i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
    lb = 0;
    ub = 10000;
    while(ub - lb > 1){
        int m = (lb + ub)/2;
        if(p(m)){
            lb = m;}
        else {
            ub = m;
        }
    }
    printf("%d\n", lb);
    
    return 0;
}
