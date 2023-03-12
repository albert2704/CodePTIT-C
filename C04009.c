#include<stdio.h>
#include<math.h>
#define ll long long

int main(){
    ll n; scanf("%lld", &n);
    ll a[105];
    for(ll i = 0; i < n; i++){
        scanf("%lld", &a[i]);
    }
    for(ll i = 0; i < n; i++){
        if(a[i] % 2 == 0) printf("%lld ", a[i]);
    }
    printf("\n");
    for(ll i = 0; i < n; i++){
        if(a[i] % 2 != 0) printf("%lld ", a[i]);
    }
    return 0;
}