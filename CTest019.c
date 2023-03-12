#include<stdio.h>
#define ll long long
#include<math.h>
int cmp(const void *a,const void *b){
    int* x = (int*)a;
    int* y = (int*)b;
    if(*x < *y) return -1;
    return 1;
}
int main(){
    ll t; scanf("%lld", &t);
    for(ll k = 1; k <= t; k++){
        ll n, m, l; scanf("%lld %lld %lld", &n, &m, &l);
        int a[n][m];
        int b[m][n];
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < m; j++){
                scanf("%d", &a[i][j]);
            }
        }
        for(int i = 0; i < m; i++){
            for(ll j = 0; j < n; j++){
                b[i][j] = a[j][i];
            }
        }
        for(ll i = 0; i < m; i++){
            if(i == l - 1)
                qsort(b[i], n, sizeof(int), cmp);
        }
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < m; j++){
                printf("%d ", b[j][i]);
            }
            printf("\n");
        }
    }
    return 0;
}