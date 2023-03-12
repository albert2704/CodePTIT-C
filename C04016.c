#include<stdio.h>
#define ll long long
#include<math.h>
ll cnt[1000001] = {0};
ll check(ll n){
    for(ll i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    if(n > 1) return 1;
    return 0;
}
int main(){
    ll t; scanf("%lld", &t);
    for(ll j = 1; j <= t; j++){
        ll n; scanf("%lld", &n);
        ll a[105];
        double max_val = -1;
        for(ll i = 0; i < n; i++){
            scanf("%lld", &a[i]);
            if(check(a[i])){
                cnt[a[i]]++;
                max_val = fmax(max_val, (double)a[i]);
            }
        }
        printf("Test %lld:\n", j);
        for(ll i = 2; i <= (ll) max_val; i++){
            if(cnt[i]){
                printf("%lld xuat hien %lld lan\n", i, cnt[i]);
                cnt[i] = 0;
            }
        }
    }
    return 0;
}