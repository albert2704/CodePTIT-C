#include<stdio.h>
#define ll long long
#include<math.h>
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll n, m; scanf("%lld %lld", &n, &m);
        ll a[n][m];
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < m; j++){
                scanf("%lld", &a[i][j]);
            }
        }
        ll h1 = 0, h2 = n - 1, c1 = 0, c2 = m - 1;
        while(h2 >= h1 && c2 >= c1){
            for(ll i = c1; i <= c2; i++){
                    printf("%lld ", a[h1][i]);
            }
            h1++;
            if(h1 > h2) break;
            for(ll i = h1; i <= h2; i++){
                    printf("%lld ", a[i][c2]);
            }
            --c2;
            if(c1 > c2) break;
            for(ll i = c2; i >= c1; i--){
                    printf("%lld ", a[h2][i]);
            }
            --h2;
            if(h1 > h2) break;
            for(ll i = h2; i >= h1; i--){
                    printf("%lld ", a[i][c1]);
            }
            ++c1;
            if(c1 > c2) break;
        }
        printf("\n");
    }
    return 0;
}