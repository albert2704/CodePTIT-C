#include<stdio.h>
#define ll long long
#include<math.h>
ll check(ll a){
    for(ll i = 2; i <= sqrt(a); i++){
        if(a % i == 0) return 0;
    }
    if(a > 1) return 1;
    return 0;
}
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        while(n--){
            ll a; scanf("%lld", &a);
            if(check(a)) printf("%lld ", a);
        }
        printf("\n");
    }
    return 0;
}