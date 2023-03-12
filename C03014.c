#include<stdio.h>
#define ll long long
#include<math.h>
ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll a, b; scanf("%lld %lld", &a, &b);
        printf("%lld %lld\n", a / gcd(a, b) * b, gcd(a, b));
    }
    return 0;
}