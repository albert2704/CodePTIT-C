#include<stdio.h>
#define ll long long
#include<math.h>

int main(){
        ll n; scanf("%lld", &n);
        ll a[n][n];
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < n; j++){
                scanf("%lld", &a[i][j]);
            }
        }
        
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < n; j++){
                if(i != n - i - 1 && i == j){
                    ll tmp = a[i][j];
                    a[i][j] = a[i][n - i - 1];
                    a[i][n - i - 1] = tmp;
                }
            }
        }
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < n; j++){
                printf("%lld ", a[i][j]);
            }
            printf("\n");
        }
    return 0;
}