#include<stdio.h>
#include<math.h>
#define ll long long
int main(){
    ll n; scanf("%lld", &n);
    while(n--){
        ll a; scanf("%lld", &a);
        for(ll i = 2; i <= (int)sqrt(a); i++){
            if(a % i == 0){
                while(a % i == 0){
                    printf("%lld ", i);
                    a /= i;
                }
            }
        }
        if(a != 1){
            printf("%lld\n", a);
        }
        else printf("\n");
    }
    return 0;
}