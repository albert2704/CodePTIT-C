#include<stdio.h>
#define ll long long
#include<math.h>
ll cnt[1000001];
int main(){
    ll n; scanf("%lld", &n);
    ll a[105];
    for(ll i = 0; i < n; i++){
        scanf("%lld", &a[i]);
        cnt[a[i]]++;
    }
    for(ll i = 0; i < n; i++){
        if(cnt[a[i]]){
            printf("%lld ", a[i]);
            cnt[a[i]] = 0;
        }
    }
    return 0;
}