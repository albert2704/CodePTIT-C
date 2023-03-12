#include<stdio.h>
#define ll long long
#include<math.h>

int main(){
        ll n, m; scanf("%lld %lld", &n, &m);
        ll a[n][m];
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < m; j++){
                scanf("%lld", &a[i][j]);
            }
        }
        ll x, y; scanf("%lld %lld", &x, &y);
        for(ll i = 0; i < m; i++){
            ll tmp = a[x - 1][i];
            a[x - 1][i] = a[y - 1][i];
            a[y - 1][i] = tmp;
        }
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < m; j++){
                printf("%lld ", a[i][j]);
            }
            printf("\n");
        }
    return 0;
}