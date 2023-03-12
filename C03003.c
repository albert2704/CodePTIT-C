#include<stdio.h>
#include<math.h>
#define ll long long
ll prime(ll n){
    for(ll i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    if(n > 1) return 1;
    else return 0;
}
int main(){
    ll n; scanf("%lld", &n);
    ll c = 1;
    for(ll i = 2; c <= n; i++){
        if(prime(i) == 1){
            printf("%lld\n", i);
            c++;
        }
    }
    return 0;
}