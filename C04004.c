#include<stdio.h>
#define ll long long
#include<math.h>
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll f1 = 1;
        ll f2 = 1;
        ll fn = 1;
        for(ll i = 1; i <= n - 2; i++){
            fn = f1 + f2;
            f1 = f2;
            f2 = fn;
        }
        printf("%lld\n", fn);
    }
    return 0;
}