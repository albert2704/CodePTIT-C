#include<stdio.h>
#include<math.h>
#define ll long long

int main(){
    ll t; scanf("%lld", &t);
    for(ll h = 1; h <= t; h++){
        ll n; scanf("%lld", &n);
        ll a[n][n];
        ll c1 = 0, c2 = n - 1, h1 = 0, h2 = n - 1;
        ll cnt = n * n;
        while(cnt >= 1){
            for(ll i = c1; i <= c2; i++){
                a[h1][i] = cnt--; 
            }
            h1++;
            for(ll i = h1; i <= h2; i++){
                a[i][c2] = cnt--;
            }
            c2--;
            for(ll i = c2; i >= c1; i--){
                a[h2][i] = cnt--;
            }
            h2--;
            for(ll i = h2; i >= h1; i--){
                a[i][c1] = cnt--;
            }
            c1++;
        }
        printf("Test %lld:\n", h);
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < n; j++){
                printf("%lld ", a[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}