#include<stdio.h>
#define ll long long
#include<math.h>
ll check_lower(ll n){
    if(n < 10) return 0;
    while(n >= 10){
        ll t = n / 10;
        if(n % 10 >= t % 10) return 0;
        n /= 10;
    }
    return 1;
}
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll cnt = 0;
        ll a, b; scanf("%lld %lld", &a, &b);
        for(ll i = a; i <= b; i++){
            if(check_lower(i)) ++cnt;
        }
        printf("%lld\n", cnt);
    }
    return 0; 
}