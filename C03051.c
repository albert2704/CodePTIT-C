#include<stdio.h>
#define ll long long
#include<math.h>
ll check(ll n){
    for(ll i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    if(n > 1) return 1;
    return 0;
}
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll res = 0;
        ll l, r; scanf("%lld %lld", &l, &r);
        for(ll i = l; i * i <= r; i++){
            if(check(i)) res++;
        }
        printf("%lld", res);
        printf("\n");
    }
    return 0;
}