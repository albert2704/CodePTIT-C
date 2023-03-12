#include<stdio.h>
#include<math.h>
#define ll long long
ll prime(ll n){
    for(ll i = 2; i <= sqrt(n); i++){
        while(n % i == 0){
            n /= i;
        }
        if(n == 1) return i;
    }
    if(n != 1) return n;
    return 0;
}
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        printf("%lld\n", prime(n));
    }
    return 0;
}