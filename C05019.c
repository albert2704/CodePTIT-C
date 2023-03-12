#include<stdio.h>
#include<math.h>
#define ll long long
ll F[100001] = {0};
void sieve(){
    for(ll i = 0; i <= 100000; i++){
        F[i] = 1;
    }
    F[0] = 0; F[1] = 0;
    for(ll i = 2; i <= sqrt(100001); i++){
        if(F[i]){
            for(ll j = i * i; j <= 100001; j += i){
                F[j] = 0;
            }
        }
    }
}
int main(){
    sieve();
    ll p[100005] = {0};
    ll k = 0;
    for(ll i = 2; i < 100001; i++){
        if(F[i] == 1){
            p[k++] = i;
        }
    }
    ll t; scanf("%lld", &t);
    for(ll h = 1; h <= t; h++){
        ll n; scanf("%lld", &n);
        ll a[n][n];
        ll c1 = 0, c2 = n - 1, h1 = 0, h2 = n - 1;
        ll cnt = 0;
        while(cnt < n * n){
            for(ll i = c1; i <= c2; i++){
                a[h1][i] = p[cnt];
                cnt++;
            }
            h1++;
            for(ll i = h1; i <= h2; i++){
                a[i][c2] = p[cnt];
                cnt++;
            }
            c2--;
            for(ll i = c2; i >= c1; i--){
                a[h2][i] = p[cnt];
                cnt++;
            }
            h2--;
            for(ll i = h2; i >= h1; i--){
                a[i][c1] = p[cnt];
                cnt++;
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