#include<stdio.h>
#define ll long long
ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}
int main(){
    ll a, b; scanf("%lld %lld", &a, &b);
    for(ll i = a; i <= b; i++){
        for(ll j = i + 1; j <= b; j++){
            if(gcd(i, j) == 1){
                printf("%s", "(");
                printf("%lld", i);
                printf(",");
                printf("%lld", j);
                printf("%s\n", ")");
            }
        }
    }
    return 0;
}