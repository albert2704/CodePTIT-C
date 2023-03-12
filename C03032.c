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
ll check(ll n){
    while(n){
        if(!check_prime(n % 10)) return 0;
        n /= 10; 
    }
    return 1;
}
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll a, b; scanf("%lld %lld", &a, &b);
        ll cnt = 0;
        for(ll i = a; i <= b; i++){
            if(check(i) && check_prime(i)) ++cnt;
        }
        printf("%lld\n", cnt);
    }
    return 0;
}