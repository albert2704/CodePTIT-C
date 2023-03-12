#include<stdio.h>
#define ll long long
ll max(ll a, ll b){
    if(b > a) return b;
    return a;
}
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll cnt[30005] = {0};
        ll n; scanf("%lld", &n);
        ll a[n];
        ll max_fre = -1;
        for(ll i = 0; i < n; i++){
            scanf("%lld", &a[i]);
            cnt[a[i]]++;
            max_fre = max(max_fre, cnt[a[i]]);
        }
        for(ll i = 0; i < n; i++){
            if(cnt[a[i]] == max_fre){
                printf("%lld ", a[i]);
                cnt[a[i]] = 0;
            }
        }
        printf("\n");
    }
    return 0;
}