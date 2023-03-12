#include<stdio.h>
#define ll long long
#include<math.h>
ll cnt[1000001] = {0};
int main(){
    ll n; scanf("%lld", &n);
    ll a[105];
    for(ll i = 0; i < n; i++){
        scanf("%lld", &a[i]);
        cnt[a[i]]++;
    }
    ll cnt1 = 0;
    ll check = 0;
    for(ll i = 0; i < n; i++){
        if(cnt[a[i]] == 1){
            ++cnt1;
        }
    }
    printf("%lld\n", cnt1);
    for(ll i = 0; i < n; i++){
        if(cnt[a[i]] == 1){
            printf("%lld ", a[i]);
            cnt[a[i]] = 0;
        }
    }
    printf("\n");
    return 0;
}