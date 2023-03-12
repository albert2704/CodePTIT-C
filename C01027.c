#include<stdio.h>
#define ll long long
ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}
int main(){
    ll n; scanf("%lld", &n);
    while(n--){
        ll a, b; scanf("%lld %lld", &a, &b);
        printf("%lld\n", gcd(a, b));
    }
    return 0;
}