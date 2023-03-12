#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define ll long long
int main(){
    ll t; scanf("%lld", &t);
    for(ll e = 1; e <= t; e++){
        ll n, m;
        scanf("%lld %lld", &n, &m);
        ll a[n][m];
        for(ll i = 0;  i < n; i++){
            for(ll j = 0; j < m; j++){
                scanf("%lld", &a[i][j]);
            }
        }
        printf("Test %lld:\n", e);
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < m; j++){
                for(ll k = i; k < n; k++){
                    for(ll p = j; p < m; p++){
                        if(a[i][j] > a[k][p]){
                            ll tmp = a[i][j];
                            a[i][j] = a[k][p];
                            a[k][p] = tmp;
                        }
                    }
                }
            }
        }
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < m; j++){
                printf("%lld ", a[i][j]);
            }
            printf("\n");
        }
    }
}