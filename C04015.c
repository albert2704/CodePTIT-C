#include<stdio.h>
#define ll long long
#include<math.h>
ll cnt[1000001] = {0};
int main(){
    ll t; scanf("%lld", &t);
    for(ll j = 1; j <= t; j++){
        ll n; scanf("%lld", &n);
        ll a[105];
        for(ll i = 0; i < n; i++){
            scanf("%lld", &a[i]);
            cnt[a[i]]++;
        }
        printf("Test %lld:\n", j);
        for(ll i = 0; i < n; i++){
            if(cnt[a[i]]){
                printf("%lld xuat hien %lld lan\n", a[i], cnt[a[i]]);
                cnt[a[i]] = 0;
            }
        }
    }
    return 0;
}