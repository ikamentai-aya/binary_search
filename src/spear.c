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
    return a >= k;
}


int main(){
    int i, lb, ub,j,l;
    scanf("%d%d", &n, &k);
    for(i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
    l = 0;
    j = 0;
    while(j < n){
        if(A[j] > l){l = A[j];}
        j = j + 1;
    }/*lはA[j]の最大値*/
    
    lb = 0;
    ub = l%k;
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
