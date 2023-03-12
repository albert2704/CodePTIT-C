#include<stdio.h>
#include<math.h>
#define ll long long
ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b){
    return a * b / gcd(a, b);
}
ll min(ll a, ll b){
    if(b > a) return a;
    return b;
}
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll n, m; scanf("%lld %lld", &n, &m);
        ll bc = n;
        for(ll i = n + 1; i <= m; i++){
            bc = lcm(bc, i);
        }
        printf("%lld\n", bc);
    }
    return 0;
}