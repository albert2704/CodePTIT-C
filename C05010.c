#include<stdio.h>
#define ll long long
#include<math.h>
ll check_prime(ll n){
    for(ll i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    if(n > 1) return 1;
    return 0;
}
int main(){
    ll n; scanf("%lld", &n);
    ll a[n][n];
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            scanf("%lld", &a[i][j]);
        }
    }
    ll sum = 0;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            if(i <= j && check_prime(a[i][j])){
                sum += a[i][j];
            }
        }
    }
    printf("%lld\n", sum);
    return 0;
}