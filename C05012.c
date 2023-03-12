#include<stdio.h>
#define ll long long
#include<math.h>
int main(){
    ll t; scanf("%lld", &t);
    for(ll h = 1; h <= t; h++){
        ll n; scanf("%lld", &n);
        ll a[n][n], b[n][n], c[n][n];
        for(ll i = 0; i < n; i++){
            ll cnt = 1;
            for(ll j = 0; j < n; j++){
                if(i >= j){
                    a[i][j] = cnt;
                    ++cnt;
                }
                else a[i][j] = 0;
            }
        }
        printf("Test %lld:\n", h);
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < n; j++){
                b[i][j] = a[j][i];
            }
        }
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < n ; j++){
                c[i][j] = 0;
                for(ll k = 0; k < n; k++){
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