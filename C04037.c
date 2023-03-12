#include<stdio.h>
#define ll long long
#include<math.h>
ll cnt[1000001];
ll cnt2[1000001];
int main(){
    ll n; scanf("%lld", &n);
    ll a[105];
    ll cnt1 = 0;
    for(ll i = 0; i < n; i++){
        scanf("%lld", &a[i]);
        cnt[a[i]]++;
        cnt2[a[i]]++;
        if(cnt2[a[i]] > 1){
            ++cnt1;
            cnt2[a[i]] = -1e9;
        }
    }
    printf("%lld\n", cnt1);
    for(ll i = 0; i < n; i++){
        if(cnt[a[i]] > 1){
            printf("%lld ", a[i]);
            cnt[a[i]] = 0;
        }
    }
    return 0;
}