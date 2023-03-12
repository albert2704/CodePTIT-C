#include<stdio.h>
#define ll long long
#include<math.h>
int main(){
    ll t; scanf("%lld", &t);
    for(ll h = 1; h <= t; h++){
        ll n, m; scanf("%lld %lld", &n, &m);
        ll a[n][m], b[m][n], c[n][n];
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < m; j++){
                scanf("%lld", &a[i][j]);
            }
        }
        printf("Test %lld:\n", h);
        for(ll i = 0; i < m; i++){
            for(ll j = 0; j < n; j++){
                b[i][j] = a[j][i];
            }
        }
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < n ; j++){
                c[i][j] = 0;
                for(ll k = 0; k < m; k++){
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < n; j++){
                printf("%lld ", c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}