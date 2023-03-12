#include<stdio.h>
#include<math.h>
#define ll long long
void analyst(ll n){
    for(ll i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            ll cnt = 0;
            while(n % i == 0){
                n /= i;
                ++cnt;
            }
            if(cnt == 1) printf("%lld", i);
            else{
                for(ll j = 1; j <= cnt; j++){
                printf("%lld", i);
                if(j != cnt) printf("x");
                }
            }
            if(n != 1) printf("x");
        }
    }
    if(n != 1) printf("%lld",n);
}
ll prime(ll n){
    for(ll i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    if(n > 1) return 1;
    return 0;
}
int main(){
    ll n; scanf("%lld", &n);
    if(prime(n)){
        printf("%lld\n", n);
        return 0;
    }
    else analyst(n);
    return 0;
}