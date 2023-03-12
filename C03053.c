#include<stdio.h>
#define ll long long
#include<math.h>
ll check(ll n){
    for(ll i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    if(n > 1) return 1;
    else return 0;
}
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        for(ll i = 2; i <= n / 2; i++){
            if(check(i) && check(n - i)) printf("%lld %lld ", i, n - i);
        }
        printf("\n");
    }
    return 0;
}