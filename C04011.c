#include<stdio.h>
#define ll long long
#include<math.h>

int main(){
    ll t; scanf("%lld", &t);
        for(ll i = 1; i <= t; i++){
            ll n; scanf("%lld", &n);
            ll a[105];
            ll max_val = -1e9;
            for(ll i = 0; i < n; i++){
                scanf("%lld", &a[i]);
            }
            ll cnt = 1;
            max_val = a[0];
            for(ll i = 1; i < n; i++){
                if(a[i] >= max_val){
                    ++cnt;
                    max_val = a[i];
                }
            }
            printf("%lld", cnt);
            printf("\n");
        }
    return 0;
}