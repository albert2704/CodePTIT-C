#include<stdio.h>
#include<math.h>
#define ll long long

int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll cnt = 0;
        ll n; scanf("%lld", &n);
        for(ll i = 1; i <= sqrt(n); i++){
            if(n % i == 0){
                if(i % 2 == 0) ++cnt;
                if(n / i != i && (n / i) % 2 == 0) ++cnt;
            }
        }
        printf("%lld\n", cnt);
    }
    return 0;
}