#include<stdio.h>
#define ll long long
#include<math.h>
ll check_reverse(ll n){
    ll t = 0;
    ll res = n;
    while(res){
        if(res % 10 == 4) return 0;
        t = t * 10 + res % 10;
        res /= 10;
    }
    if(t == n) return 1;
    return 0;
}
ll check_sum_mod10(ll n){
    ll res = 0;
    while(n){
        res += n % 10;
        n /= 10;
    }
    if(res % 10 == 0) return 1;
    return 0;
}
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll a = pow(10, n - 1);
        ll b = pow(10, n);
        for(ll i = a; i < b; i++){
            if(check_reverse(i) && check_sum_mod10(i)) printf("%lld ", i);
        }
        printf("\n");
    }
    return 0;
}