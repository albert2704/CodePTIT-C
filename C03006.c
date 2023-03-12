#include<stdio.h>
#include<math.h>
#define ll long long
void analyst(ll n){
    for(ll i = 2; i <= sqrt(n); i++){
        ll mu = 0;
        if(n % i == 0){
            while(n % i == 0){
                mu++;
                n /= i;
            }
            printf("%lld%s%lld%s", i, "(", mu, ") ");
        }
    }
    if(n != 1) printf("%lld%s%d%s", n, "(", 1, ") ");
    printf("\n");
}
int main(){
    ll t; scanf("%lld", &t);
    for(ll i = 1; i <= t; i++){
        ll n; scanf("%lld", &n);
        printf("%s %lld%s", "Test", i, ": ");
        analyst(n);
    }
    return 0;
}