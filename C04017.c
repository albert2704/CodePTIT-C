#include<stdio.h>
#define ll long long
#include<math.h>
ll check(ll n){
    for(ll i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    if(n > 1) return 1;
    return 0;
}
int main(){
    ll n; scanf("%lld", &n);
    ll cnt1 = 0;
    ll a[105];
    for(ll i = 0; i < n; i++){
        scanf("%lld", &a[i]);
        if(check(a[i])){
            cnt1++;
        }
    }
    printf("%lld ", cnt1);
    for(ll i = 0; i < n; i++){
        if(check(a[i])){
            printf("%lld ", a[i]);
        }
    }
    return 0;
}