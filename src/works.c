#include <stdio.h>

int n;
int k;
int A[100000];

int p(int x){
    int i,j, l;
    i = 0;
    j = k;
    l = x;
    while(i < n && j >= 0){
        if(l-A[i] >0){
            l = l-A[i];
            i = i+1;
        }
        if(l - A[i] < 0){
            l = x;
            j = j-1;
        }
        else {
            l = x;
            i = i + 1;
            j = j -1;
        }
    }
    return j >= 0;
}


int main(){
    int i, lb, ub, j, l;
    scanf("%d%d", &n, &k);
    for(i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
    j = 0;
    l = 0;
    while(j < n){
        l = l + A[j];
        j = j + 1;
    }
    lb = 0;
    ub = l;
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
