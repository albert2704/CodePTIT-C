#include<stdio.h>
#include<math.h>
#define ll long long
ll F[82] = {0};
void fibo(){
    F[0] = 0;
    F[1] = 1;
    for(ll i = 2; i <= 81; i++){
        F[i] = F[i - 1] + F[i - 2];
    }
}
int main(){
    fibo();
        ll n; scanf("%lld", &n);
        ll a[n][n];
        ll c1 = 0, c2 = n - 1, h1 = 0, h2 = n - 1;
        ll cnt = 0;
        while(cnt < n * n){
            for(ll i = c1; i <= c2; i++){
                a[h1][i] = F[cnt++];
            }
            h1++;
            for(ll i = h1; i <= h2; i++){
                a[i][c2] = F[cnt++];
            }
            c2--;
            for(ll i = c2; i >= c1; i--){
                a[h2][i] = F[cnt++];
            }
            h2--;
            for(ll i = h2; i >= h1; i--){
                a[i][c1] = F[cnt++];
            }
            c1++;
        }
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < n; j++){
                printf("%lld ", a[i][j]);
            }
            printf("\n");
        }
    return 0;
}