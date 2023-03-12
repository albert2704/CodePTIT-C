#include<stdio.h>
#define ll long long
ll legendre(ll n, ll p){
    ll ans = 0;
    for(ll i = p; i <= n; i *= p){
        ans += n / i;
    }
    return ans;
}
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll n, p; scanf("%lld %lld", &n, &p);
        printf("%lld\n", legendre(n, p));
    }
    return 0;
}