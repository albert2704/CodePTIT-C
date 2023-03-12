#include<stdio.h>
#include<math.h>
#define ll long long
ll a[1000000] = {0};
void sieve(ll n){
    for(ll i = 0; i <= n; i++){
        a[i] = 1;
    }
    a[1] = 0;
    a[0] = a[1];
    for(ll i = 2; i <= sqrt(n); i++){
        if(a[i]){
            for(ll j = i * i; j <= n; j += i){
                a[j] = 0;
            }
        }
    }
}
int main(){
    ll n; scanf("%lld", &n);
    sieve(n);
    for(ll i = 1; i < n; i++){
        if(a[i]) printf("%lld\n", i);
    }
    return 0;
}