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
int main(){
    ll n; scanf("%lld", &n);
    ll tmp = 0;
    ll cnt[15] = {0};
    while(n){
        tmp = tmp * 10 + n % 10;
        n /= 10;
    }
    ll a[15] = {0};
    for(ll i = 0; i < 15; i++){
        if(prime(tmp % 10)) ++cnt[tmp % 10];
        if(tmp){
            a[i] = tmp % 10;
            tmp /= 10;
        }
    }
    for(ll j = 0; j < 15; j++){
        if(cnt[a[j]]){
            printf("%lld %lld\n", a[j], cnt[a[j]]);
            cnt[a[j]] = 0;
        }
    }
    return 0;
}