#include<stdio.h>
#define ll long long
#include<math.h>

int main(){
    ll t; scanf("%lld", &t);
    for(ll k = 1; k <= t; k++){
        ll n, m; scanf("%lld %lld", &n, &m);
        ll a[n][m];
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < m; j++){
                scanf("%lld", &a[i][j]);
            }
        }
        printf("Test %lld:\n", k);
        for(ll i = 1; i < n; i++){
            for(ll j = 1; j < m; j++){
                printf("%lld ", a[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}