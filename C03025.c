#include<stdio.h>
#include<math.h>
#define ll long long
ll prime(ll n){
    for(ll i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    if(n > 1) return 1;
    return 0;
}
ll sum(ll n){
    ll res = 0;
    while(n){
        ll a = n % 10;
        if(!prime(a)) return 0;
        res += a;
        n /= 10;
    }
    if(prime(res)) return 1;
    return 0;
}
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll a, b; scanf("%lld %lld", &a, &b);
        ll cnt = 0;
        for(ll i = a; i <= b; i++){
            if(sum(i) && prime(i)) ++cnt;
        }
        printf("%lld\n", cnt);
    }
    return 0;
}