#include<stdio.h>
#define ll long long
#include<math.h>

int main(){
    ll m, n, p, q;
    scanf("%lld %lld %lld %lld", &m, &n, &p, &q);
    ll a[m][n], b[n][p], e[m][p], c[p][q], d[m][q];
    for(ll i = 0; i < m; i++){
        for(ll j = 0; j < n; j++){
            scanf("%lld", &a[i][j]);
        }
    }
    for(ll i = 0; i < n; i++){
        for(ll j =0 ; j < p; j++){
            scanf("%lld", &b[i][j]);
        }
    }
    for(ll i = 0; i < p; i++){
        for(ll j =0 ; j < q; j++){
            scanf("%lld", &c[i][j]);
        }
    }
    for(ll i = 0; i < m; i++){
        for(ll j = 0; j < p; j++){
            e[i][j] = 0;
            for(ll k = 0; k < n; k++){
                e[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for(ll i = 0; i < m; i++){
        for(ll j = 0; j < q; j++){
            d[i][j] = 0;
            for(ll k = 0; k < p; k++){
                d[i][j] += e[i][k] * c[k][j];
            }
        }
    }
    for(ll i = 0; i < m; i++){
        for(ll j = 0; j < q; j++){
            printf("%lld ", d[i][j]);
        }
        printf("\n");
    }
    return 0;
}