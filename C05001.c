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
    for(ll i = 0; i < m; i++){
        for(ll j = 0; j < n; j++){
            printf("%lld ", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}