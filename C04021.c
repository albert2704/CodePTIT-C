#include<stdio.h>
#define ll long long
#include<math.h>
int main(){
    ll n; scanf("%lld", &n);
    ll a[105];
    ll cnt = 0;
    for(ll i = 0; i < n; i++){
        scanf("%lld", &a[i]);
    }
    ll k; scanf("%lld", &k);
    for(ll i = n - k; i < n; i++){
        printf("%lld ", a[i]);
    }
    for(ll i = 0; i < n - k; i++){
        printf("%lld ", a[i]);
    }
    return 0;
}