#include<stdio.h>
#define ll long long
#include<math.h>
void analyst(ll n){
    for(ll i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            ll mu = 0;
            while(n % i == 0){
                ++mu;
                n /= i;
            }
            printf("%lld^%lld", i, mu);
            if(n != 1){
                printf(" * ");
            }
        }
    }
    if(n != 1){
        printf("%lld^1\n", n);
    }
    else printf("\n");
}
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        printf("%lld = ", n);
        analyst(n);
    }
}