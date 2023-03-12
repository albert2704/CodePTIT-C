#include<stdio.h>
#define ll long long
ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll a, b, c, d;
        scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
        if(gcd(a, b) == gcd(c, d)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}