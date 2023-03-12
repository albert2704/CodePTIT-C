#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define ll long long
ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b){
    return a * b / gcd(a, b);
}
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll a[n];
        for(ll i = 0 ; i < n ;i++){
            scanf("%lld", &a[i]);
        }
        ll b[n + 1];
        b[0] = a[0];
        b[n] = a[n - 1];
        for(ll i = 1; i < n; i++){
            b[i] = lcm(a[i], a[i - 1]);
        }
        for(ll i = 0; i < n + 1; i++){
            printf("%lld ", b[i]);
        }
        printf("\n");
    }
    return 0;
}