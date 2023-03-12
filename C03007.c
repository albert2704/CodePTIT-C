#include<stdio.h>
#include<math.h>
#define ll long long
ll check_prime(ll n){
    for(ll i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    if(n > 1) return 1;
    return 0;
}
ll check_reverse(ll n){
    ll tmp = n;
    ll res = 0;
    while(tmp){
        res = res * 10 + tmp % 10;
        tmp /= 10;
    }
    if(res == n) return 1;
    return 0;
}
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll a, b; scanf("%lld %lld", &a, &b);
        ll cnt = 0;
        for(ll i = a; i <= b; i++){
            if(cnt == 10){
                printf("\n");
                cnt = 0;
            }
            if(check_prime(i) && check_reverse(i)){
                printf("%lld ", i);
                ++cnt;
            }
        }
        printf("\n");
        if(t != 0)
            printf("\n");
    }
}