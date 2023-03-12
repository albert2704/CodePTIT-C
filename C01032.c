#include<stdio.h>
#include<math.h>
#define ll long long
ll analyst(ll n){
    ll tich = 1;
    for(ll i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            while(n % i == 0){
                n /= i;
            }
            tich *= i;
        }
    }
    if(n != 1) tich *= n;
    return tich;
}
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        printf("%lld\n", analyst(n));
    }
    return 0;
}