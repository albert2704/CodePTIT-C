#include<stdio.h>
#define ll long long
#include<math.h>
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll a[50];
        ll cnt = 0;
        for(ll i = 0; i < n; i++){
            scanf("%lld", &a[i]);
        }
        for(ll i = 0; i < n - 1; i++){
            if(a[i] == a[i + 1]) ++cnt;
        }
        printf("%lld\n", cnt);
    }
    return 0;
}